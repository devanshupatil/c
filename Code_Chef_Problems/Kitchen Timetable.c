#include <stdio.h>

int main(void)
{
    int T; // Demoting the number of tast case
    int N; // Number of student

    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &N);
        int A[N];
        int B[N];
        int count = 0;
        int temp = 0;

        /*Time taken by student to cook assign into array of A of each index*/
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }

        /*Student what time what to cook, assign into array of B each index*/
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &B[j]);
        }

        temp = A[0]; // Assign A of first index value into temp
        for (int k = 0; k < N; k++)
        {
            if (temp >= B[k]) // If temp is more than equal to B of kth index value
            {
                count++; // If true, Add by one
            }
            temp = A[k + 1] - A[k]; // Assign next student taken time into temp
        }

        printf("%d\n", count); // Print count value
    }
    return 0; // Exit the program
}
