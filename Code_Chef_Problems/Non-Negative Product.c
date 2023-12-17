#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int size;
    int Total = 0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &size);

        int arr[size];

        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr[j]);
        }

        Total = arr[0]; // Assign array of first index value
        for (int l = 1; l < size; l++)
        {
            Total = Total * arr[l]; // Multiply the array of all index value and assign in total Variable
        }

        if (Total >= 0) // If total is more than '0'
        {
            printf("0\n"); // If true, print '0'
        }
        else
        {
            printf("1\n"); // If false, print '1'
        }
    }
    return 0; // Exit the program
}
