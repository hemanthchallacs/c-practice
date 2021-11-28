#include<stdio.h>
int partition(int arr[], int low, int high)
{
    int i = low-1;

    int pivot = arr[high];
    for(int j = low;j<=high-1; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i+1];
            arr[i+1] = pivot;
            arr[high] = temp;

    return i+1;
}


void quicksort(int arr[], int low, int high)
{
    if(low< high)
    {
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }
}

int main()
{
    
    int arr[] = {1,4,7,4,7,2,1,0};
    int n = 8;

    quicksort(arr, 0, 7);

    for(int i = 0;i<8;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;

}
