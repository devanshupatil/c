#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int R; // Rating of person

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d", &R);

        if (R >= 2000) // If Rating is more than equal to 2000
        {
            printf("1\n"); // If true, print '1'
        }
        else if (R >= 1600 && R < 2000) // If Rating is less than or equal to 1600 and Rating is more than 2000
        {
            printf("2\n"); // If true, print '2'
        }
        else
        {
            printf("3\n"); // If false, print '3'
        }
    }
    return 0; // Exit the program
}
