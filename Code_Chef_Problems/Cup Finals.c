#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int T;    // Denoting the number of tast case
    int X, Y; // The skill levels of both teams
    int D;    // The maximum skill difference

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d", &X, &Y, &D);

        if (abs(X - Y) <= D) // If skill difference of both teams is less than or equal to maximum skill difference
        {
            printf("YES\n"); // If true , print 'YES'
        }
        else
        {
            printf("NO\n"); // If false , print 'NO'
        }
    }
    return 0; // Exit the program
}
