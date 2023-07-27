#include <stdio.h>

int main(void)
{
    int T; // Denoting the nmber of tast case
    int A; // Alice
    int B; // Bob
    int C; // Charlie
    int X; // Cost of netflix subscription

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // The run each tast case
    {
        scanf("%d %d %d %d", &A, &B, &C, &X);

        if (A + B >= X || A + C >= X || B + C >= X) // Adding the buy price of any two person buy is more or equal to cost of Netflix subscription
        {
            printf("Yes \n"); // If true , print 'Yes'
        }
        else
        {
            printf("No \n"); // If false , print 'No'
        }
    }
    return 0; // Exit the program
}
