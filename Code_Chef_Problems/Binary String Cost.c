#include <stdio.h>

int main(void)
{
    int T;    // Denoting the number of tast case
    int N;    // Length of string
    int X, Y; // Number of tax changed

    scanf("%d", &T);

    while (T--) // Run each tast case
    {
        int count_1 = 0;
        int count_0 = 0;
        int j = 0;

        scanf("%d %d %d", &N, &X, &Y);

        char S[N];
        getchar();

        for (int i = 0; i < N; i++)
        {
            scanf("%c", &S[i]);
        }

        while (S[j] != '\0') // If string of 'j' index is not eqaul to null
        {
            if (S[j] == '1') // If string of 'j' index is equal to 1
            {
                count_1++; // If true, add by one
            }
            j++; // Add by one
        }

        j = 0; // Assign 0 into j

        while (S[j] != '\0') // If string of 'j' index is not eqaul to null
        {
            if (S[j] == '0') // If string of 'j' index is equal to 0
            {
                count_0++; // If true, add by one
            }
            j++; // Add by one
        }

        if (count_1 == N || count_0 == N) // If count_1 is equal to N or if count_0 is equal to N
        {
            printf("0\n"); // If true, print '0'
        }
        else
        {
            if (X > Y) // If X is more than value
            {
                printf("%d\n", Y); // If true, print Y value
            }
            else
            {
                printf("%d\n", X); // If false, print X value
            }
        }
    }

    return 0; // Exit the program
}
