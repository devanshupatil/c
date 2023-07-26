#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int X; // Thehe capacity of each airplane
    int Y; // The number of people willing to book seat
    int Z; // The rupees of each ticket
    int mul = 0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // The run each tast case
    {
        scanf("%d %d %d ", &X, &Y, &Z);

        mul = X * 10; // The total available seats

        if (mul >= Y) // If total seats are less than book seat
        {
            printf("%d \n", Y * Z); // If true , print 'The total momey chef earns'
        }
        else
        {
            printf("%d \n", mul * Z); // if false , print 'The people book equal to available seat and chef earn each ticket sum of each people'
        }
    }
    return 0;
}