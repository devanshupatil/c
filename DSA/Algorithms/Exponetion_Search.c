#include <stdio.h>

int Binear_search(int arr[], int element, int low, int mid, int high)
{
    mid = (low + high) / 2;

    if (arr[mid] == element)
    {
        printf("The element %d was found index %d \n", element, mid);
        return 0;
    }
    else if (arr[mid] < element)
    {
        low = mid;
        Binear_search(arr, element, low, mid, high);
    }
    else if (arr[mid] > element)
    {
        high = mid;
        Binear_search(arr, element, low, mid, high);
    }
    else
    {
        return -1;
    }
}

int Exponetion_search(int arr[], int element, int i, int size)
{
    if (arr[0] == element)
    {
        return 0;
    }
    i = i * 2;
    while (arr[i] > element)
    {
        int temp = Binear_search(arr, element, i / 2, 0, i);
        if (temp == 0)
        {
            return 0;
        }
    }
    if (size < i)
    {
        int temp = Binear_search(arr, element, i / 2, 0, size);
        if (temp == 0)
        {
            return 0;
        }
    }
    if (size > i)
    {
        Exponetion_search(arr, element, i, size);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int element = 6;
    int size = sizeof(arr) / sizeof(int);
    int search_index = Exponetion_search(arr, element, 1, size - 1);
    return 0;
}