#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int A, B, C;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d", &A, &B, &C);

        if (A == 0 && B == 1 || A == 0 && B == 1 || B == 0 && C == 1 || B == 0 && A == 1 || C == 0 && A == 1 || C == 0 && B == 1)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}
