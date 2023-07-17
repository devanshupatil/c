#include <stdio.h>

int main(void)
{
    int T;
    int X;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &X);

        if (X > 24)
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