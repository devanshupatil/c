#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tas case
    int temp = 0;
    int N; // Number of days, traded the stock

    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);
        int add = 0;

        int arr[N];
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[j]);
        }
        temp = arr[0]; // Assign array of first index value in temp
        for (int k = 0; k < N; k++)
        {
            if (temp > arr[k]) // If temp value is more than array k index value
            {
                temp = arr[k]; // If true, assign array of k index value in temp
            }
        }
        for (int l = 0; l < N; l++)
        {
            if (arr[l] == temp) // If array of l index value is equal to temp value
            {
                arr[l] = 0; // If true, assign array of l index value 0
                break;      // Exit the loop
            }
        }
        for (int p = 0; p < N; p++)
        {
            add += arr[p]; // Sum of all arrya of p index value
        }

        printf("%d\n", add); // Print sum
    }
    return 0; // Exit the program
}
