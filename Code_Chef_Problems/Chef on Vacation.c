#include <stdio.h>

int main(void)
{
    int T;    // Denothing the number of tast case
    int x, y; // The trips one with his family and the other with his friends
    int z;    // The vacation will last

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d", &x, &y, &z);

        if (x + y <= z) // If Addition of x and y is equal to z
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
