#include <stdio.h>

int main(void)
{
    int T; // The number of tast case
    int X; // The initial volume of tv
    int Y; // The final volum of tv

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // The run each tast case
    {
        scanf("%d %d ", &X, &Y);

        if (X > Y) // The initial volume is more than final volume of tv
        {
            printf("%d \n", X - Y); // if true , print 'the number of up button increase the volume by user'
        }
        else
        {
            printf("%d \n", Y - X); // if false , print 'number of down button decrease the volume by user'
        }
    }

    return 0; // Exit thr program
}