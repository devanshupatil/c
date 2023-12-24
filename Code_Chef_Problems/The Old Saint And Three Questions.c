#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int A[3];
    int B[3];

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &A[i]);
        }
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &B[j]);
        }

        int Correct_ans = 0;
        int hero_ans = 0;

        for (int k = 0; k < 3; k++)
        {
            if (A[k] == 1)
            {
                Correct_ans++;
            }
        }

        for (int l = 0; l < 3; l++)
        {
            if (B[l] == 1)
            {
                hero_ans++;
            }
        }

        if (Correct_ans == hero_ans)
        {
            printf("Pass\n");
        }
        else
        {
            printf("Fail\n");
        }
    }
    return 0;
}
