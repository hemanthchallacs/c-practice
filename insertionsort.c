#include<stdio.h>
int main()
{

        int arr[]  = {1,3,5,7,4,6,4,2};
int n = 8;


for(int i = 1;i<n;i++)
{
    int key = arr[i];
    int j = i-1;

    while(j>=0 && arr[j]> key)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = key;
}
for(int i = 0; i<8;i++)
printf("%d ", arr[i]);
    return 0;
}