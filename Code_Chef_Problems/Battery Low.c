#include <stdio.h>

int main(void)
{
    int T; // The number of test cases
    int X; // Denoting the battery level of the phone

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // The run each tast case
    {
        scanf("%d", &X);

        if (X <= 15) // If the battery level is 15% or below
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
