#include <stdio.h>

int main()
{
    int Arr[] = {7, 4, 10, 8, 3, 1};
    int size = sizeof(Arr) / sizeof(int);
    int minimam = 1000000;
    int index;
    int temp;

    printf("UnSorted Array :-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", Arr[i]);
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (Arr[j] < minimam)
            {
                minimam = Arr[j];
                index = j;
            }
        }
        temp = Arr[i];
        Arr[i] = minimam;
        Arr[index] = temp;
        minimam = 1000000;
    }
    printf("\n Sorted Array :-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", Arr[i]);
    }

    return 0;
}