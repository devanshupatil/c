#include <stdio.h>

int main(void)
{
    int T; // Deniting the number of tast case
    int X; // Fastest finish time
    int Y; // chef's finish time

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d", &X, &Y);

        if ((X * 1.07) >= Y) // According the 170% rule multiplication of X and 170 is equal or more than Y
        {
            printf("Yes \n"); // If true , print 'Yes'
        }
        else
        {
            printf("No \n"); // If false . print 'No'
        }
    }
    return 0; // Exit the program
}