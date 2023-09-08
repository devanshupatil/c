#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int X; // RCB team points
    int Y; // The points to qualify for the playoffs
    int Z; // The remaining games

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d", &X, &Y, &Z);

        if (X + (Z * 2) >= Y) // If Z multipy with 2 and add to X that value is more than equal to Y
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
