#include <stdio.h>

int main(void)
{
    int T;          // Denoting the number of tast case
    int g1, s1, b1; // First Country ranked
    int g2, s2, b2; // Second Country ranked
    int First_Country;
    int Second_Country;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d %d %d %d", &g1, &s1, &b1, &g2, &s2, &b2);

        // Calculating the rank of Countrys

        First_Country = g1 + s1 + b1;
        Second_Country = g2 + s2 + b2;

        if (First_Country > Second_Country) // If First_Country rank is more than Second_Country
        {
            printf("1\n"); // If true, print '1'
        }
        else
        {
            printf("2\n"); // If false, print '2'
        }
    }
    return 0; // Exit the program
}
