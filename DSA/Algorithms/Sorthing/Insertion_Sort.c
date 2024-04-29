#include <stdio.h>

int main()
{
    int arr[] = {16, 78, 6, 8, 5, 90, 876, 67698, 9043, 10};
    int size = sizeof(arr) / sizeof(int);

    printf("UnSorted Array :-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }

    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    printf("\n Sorted Array :-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }

    return 0;
}