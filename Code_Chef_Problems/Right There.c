#include <stdio.h>

int main(void)
{
    int T;
    int X;
    int N;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &N, &X);

        if (N <= X)
        {
            printf("YES \n");
        }

        else
        {
            printf("NO \n");
        }
    }
    return 0;
}
