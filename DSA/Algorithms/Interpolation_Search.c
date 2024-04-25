#include <stdio.h>

int Inderpolation_search(int arr[], int element, int low, int high, int search_index)
{
    search_index = low + (element - arr[low]) / 2 * high - low;
    search_index = search_index / ((arr[high] - arr[low]) / 2);

    if (arr[search_index] == element)
    {
        return search_index;
    }

    if (arr[search_index] > element)
    {
        high = search_index - 1;
        Inderpolation_search(arr, element, low, high, search_index);
    }
    else
    {
        low = search_index + 1;
        Inderpolation_search(arr, element, low, high, search_index);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int element = 9;
    int low = 0;
    int size = sizeof(arr) / sizeof(int);
    int high = size - 1;
    int search_index = Inderpolation_search(arr, element, low, high, search_index);
    printf("The element %d was found index %d \n", element, search_index);
    return 0;
}