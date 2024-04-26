#include <stdio.h>

int Binear_search(int arr[], int element, int low, int mid, int high)
{
    mid = (low + high) / 2;

    if (arr[mid] == element)
    {
        return mid;
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

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 10, 109, 45, 200, 300, 9};
    int element = 200;
    int low = 0;
    int size = sizeof(arr) / sizeof(int);
    int high = size - 1;
    int mid;
    int search_index = Binear_search(arr, element, low, mid, high);
    printf("The element %d was found index %d \n", element, search_index);
    return 0;
}