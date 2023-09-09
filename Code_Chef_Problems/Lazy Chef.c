#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int X, M, D;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d", &X, &M, &D);

        int max = X * M;  // Calculating the given work finished time of chef
        int max2 = X + D; // Calculating the chef max time to finished work

        if (max <= max2) // If max is less than equal to max2
        {
            printf("%d\n", max); // If true , print 'max'
        }
        else if (max2 <= max) // If max2 is less than equal to max
        {
            printf("%d\n", max2); // If true , print 'max2'
        }
    }
    return 0; // Exit the program
}