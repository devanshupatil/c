#include <stdio.h>

int Partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low - 1;
    int j = high;
    int temp;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

int Quick_sort(int arr[], int low, int high)
{
    int partition_index; // Index of pivot left partition
    if (low < high)
    {
        partition_index = Partition(arr, low, high);
        Quick_sort(arr, low, partition_index - 1);  // Sort left sub array
        Quick_sort(arr, partition_index + 1, high); // Sort Right sub array
    }
}

int main()
{
    int arr[] = {5, 8, 2, 0, 9, 1};
    int size = sizeof(arr) / sizeof(int);

    printf("UnSorted Array :-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }

    Quick_sort(arr, 0, size - 1);

    printf("\nSorted Array :-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}