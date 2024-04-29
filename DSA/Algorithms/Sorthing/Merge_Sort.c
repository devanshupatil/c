#include <stdio.h>

int main()
{
    int Arr_1[] = {1, 2, 3, 4, 5};
    int Arr_2[] = {9, 10, 19, 80, 90, 675};

    int size_arr_1 = sizeof(Arr_1) / sizeof(int);
    int size_arr_2 = sizeof(Arr_2) / sizeof(int);

    for (int i = 0; i < size_arr_1; i++)
    {
        printf("%d\t", Arr_1[i]);
    }
    printf("\n");
    for (int i = 0; i < size_arr_2; i++)
    {
        printf("%d\t", Arr_2[i]);
    }
    int Arr_3[size_arr_1 + size_arr_2];
    int i, j, k;
    i = j = k = 0;

    while (i < size_arr_1 && j < size_arr_2)
    {
        if (Arr_1[i] < Arr_2[j])
        {
            Arr_3[k] = Arr_1[i];
            i++;
            k++;
        }
        else
        {
            Arr_3[k] = Arr_2[j];
            j++;
            k++;
        }
    }
    while (i < size_arr_1)
    {
        Arr_3[k] = Arr_1[i];
        i++;
        k++;
    }

    while (j < size_arr_2)
    {
        Arr_3[k] = Arr_2[j];
        j++;
        k++;
    }

    printf("\n");
    for (int i = 0; i < size_arr_1 + size_arr_2; i++)
    {
        printf("%d\t", Arr_3[i]);
    }

    return 0;
}