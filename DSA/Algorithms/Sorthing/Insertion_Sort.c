#include <stdio.h>

int main()
{
    int arr[] = {16, 78, 6, 8, 5, 90, 876, 67698, 9043, 10};
    int size = sizeof(arr) / sizeof(int);
    int pivot = 16;
    int temp;
    int index;

    for (int i = 0; i < size; i++)
    {
        if (pivot < arr[i])
        {
            for (int j = size - 1; j >= 0; j--)
            {
                if (i <= j)
                {
                    index = i;
                }
                else if (j <= i)
                {
                    index = j;
                }
                if (arr[j] < pivot)
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    printf("The element %d is sorted in index %d", pivot, index);
    return 0;
}