#include <stdio.h>

int main(void)
{
    int T;
    int X;
    int Y;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &X, &Y);

        if (X < Y)
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