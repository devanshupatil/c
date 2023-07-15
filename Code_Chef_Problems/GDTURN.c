#include <stdio.h>

int main()
{
    int T;
    int X, Y;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &X, &Y);

        if (X + Y > 6)
        {
            printf("Yes \n");
        }

        else
        {
            printf("No \n");
        }
    }

    return 0;
}
