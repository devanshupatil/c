#include <stdio.h>

int main(void)
{
    int T; // Denoting the numbar of tast case
    int x, y, z;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d", &x, &y, &z);

        int A = x * y;
        int B = z;

        if ((x * y) % z == 0)
        {
            printf("%d %d\n", x * y, z);
        }
        else if ((x * z) % y == 0)
        {
            printf("%d %d\n", x * z, y);
        }
        else if ((y * z) % x == 0)
        {
            printf("%d %d\n", y * z, x);
        }
        else
        {
            printf("%d\n", -1);
        }
    }
    return 0;
}