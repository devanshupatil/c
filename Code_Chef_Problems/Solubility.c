#include <stdio.h>

int main(void)
{
    int T;
    int X, A, B;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d", &X, &A, &B);
        int value = 0;

        value = A + (100 - X) * B;
        value *= 10;

        printf("%d\n", value);
    }
    return 0;
}
