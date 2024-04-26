#include <stdio.h>

int linear_search(int arr[], int search, int size, int i)
{
    for (int j = i; j <= size; j++)
    {
        if (arr[j] == search)
        {
            printf("The element %d was found index %d \n", search, j);
            return 0;
        }
    }
    return -1;
}

int Jump_search(int arr[], int M, int i, int search, int size)
{
    if (arr[i] == search)
    {
        printf("The element %d was found index %d \n", search, i);
        return 0;
    }
    else if (arr[i] > search)
    {
        int temp = linear_search(arr, search, size, i / 2);
        if (temp == 0)
        {
            return 0;
        }
    }
    else if (i > size)
    {
        int temp = linear_search(arr, search, size, i / 2);
        if (temp == 0)
        {
            return 0;
        }
    }

    Jump_search(arr, M, i + M, search, size);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int search = 9;
    int size = sizeof(arr) / sizeof(int);
    Jump_search(arr, 3, 0, search, size - 1);
    return 0;
}