#include <stdio.h>

int linear_search(int arr[], int element, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 23133, 44536, 4556, 687768, 90809808, 9};
    int element = 6;
    int size = sizeof(arr) / sizeof(int);
    int search_index = linear_search(arr, element, size);
    printf("The element %d was found index %d \n", element, search_index);
    return 0;
}