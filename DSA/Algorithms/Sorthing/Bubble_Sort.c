#include <stdio.h>

int main()
{
    int arr[] = {15, 16, 6, 8, 5};
    int size = sizeof(arr) / sizeof(int);
    int temp;

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}