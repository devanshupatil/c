#include <stdio.h>

int main(void)
{
    int T; // Denoting the umber of tast case
    int N;

    scanf("%d", &T);

    while (T--) // Run each tast case
    {
        scanf("%d", &N);

        int Arr_B[N];
        int count = 0;

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &Arr_B[i]);
        }

        for (int j = 0; j < N; j++)
        {
            if (Arr_B[j] == 1) // If Array of j index value is equal to 1
            {
                count++; // If true, count by 1
            }
        }
        count = count % 2; // Assign count value modulo 2 in count
        if (count == 0)    // If count is equal to 0
        {
            printf("YES\n"); // If true, print 'YES'
        }
        else
        {
            printf("NO\n"); // IF false, print 'NO'
        }
    }

    return 0; // Exit the program
}
