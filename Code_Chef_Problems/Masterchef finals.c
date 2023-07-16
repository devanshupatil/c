#include <stdio.h>

int main(void)
{
    int T;
    int X;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &X);

        if (X > 10)
        {
            printf("NO \n");
        }

        else
        {
            printf("YES \n");
        }
    }
    return 0;
}
