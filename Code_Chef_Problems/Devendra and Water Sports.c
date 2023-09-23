#include <stdio.h>

int main(void)
{
    int T;
    int Z, Y, A, B, C;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d %d %d", &Z, &Y, &A, &B, &C);

        if ((Z - Y) >= (A + B + C))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
