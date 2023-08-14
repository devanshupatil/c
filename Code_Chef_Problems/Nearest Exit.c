#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int X; // Number seats of passenger

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d", &X);

        if (X <= 50) // If the passenger seat number is less than 50
        {
            printf("LEFT\n"); // If ture , print 'LEFT'
        }
        else
        {
            printf("RIGHT\n"); // If false , print 'RIGHT'
        }
    }
    return 0; // Exit the program
}
