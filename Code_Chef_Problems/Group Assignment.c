#include <stdio.h>
int main()
{
    int T;
    int N, X;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &N, &X);
        printf("%d\n", 2 * N - (X - 1));
    }
    return 0;
}