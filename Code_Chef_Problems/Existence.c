#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int X, Y;
    int x, y;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &X, &Y);

        x = X * X * X * X;
        x = x + 4 * Y * Y;

        y = 4 * X * X * Y;

        if (x == y) // If x is equal to y
        {
            printf("YES\n"); // If true, print 'YES'
        }
        else
        {
            printf("NO\n"); // If false, print 'NO'
        }
    }
    return 0; // Exit the program
}
