#include <stdio.h>

int main(void)
{
    int T;      // Denoting the number of tast case
    int X1, Y1; // The position of the first rook
    int X2, Y2; // The position of the second rook

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);

        if (X1 == X2) // If both Rock Column are are same
        {
            printf("YES\n"); // If true, print 'YES'
        }
        else if (Y1 == Y2) // If both Rock row are same
        {
            printf("YES\n"); // If true, print 'YES'
        }
        else
        {
            printf("NO\n"); // If false, print 'NO'
        }
    }
}
