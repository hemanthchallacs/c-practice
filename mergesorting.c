#include<stdio.h>


void merge(int arr[], int low, int mid, int high)
{
    int size1 = mid-low+1;
    int size2 = high-mid;

    int l[size1];
    int r[size2];
    for(int i = 0; i<size1;i++)
    {
        l[i] = arr[low+i];
    }

    for(int j =0;j<size2;j++)
    {
        r[j] = arr[mid+1+j]; 
    }

    int k =low;
    int i= 0;
    int j =0;

    while(i<size1 && j<size2)
    {
        if(l[i]<=r[j])
        {
            arr[k++] = l[i++];
        }
        else
        arr[k++] = r[j++];
    }

    while(i<size1)
    arr[k++] = l[i++];
    while(j<size2)
    arr[k++] = r[j++];


}

void mergesort(int arr[], int low, int high)
{
    if(low< high)
    {
        int mid = (low+high)/2;

        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[] = {1,4,7,4,7,2,1,0};
    int n = 8;

    mergesort(arr, 0, 7);
    for(int i = 0;i<8;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}