#include<stdio.h>
int main()
{
    int arr[]  = {1,3,5,7,4,6,4,2};


int n = 8;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0 ; j<n-1-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                arr[j] = arr[j]+arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
    }
     for(int i = 0;i<n;i++)
    {
       printf("%d ", arr[i]);
    }
    
    return 0;
}