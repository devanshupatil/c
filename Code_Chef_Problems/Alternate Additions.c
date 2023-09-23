#include <stdio.h>

int main(void)
{
    int T;
    int A, B, C;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &A, &B);

        C = B - A;
        C -= 2;

        if (C % 3 == 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}