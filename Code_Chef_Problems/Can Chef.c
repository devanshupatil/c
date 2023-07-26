#include <stdio.h>

int main(void)
{

    int T; // Denoting the number of tast case
    int X; // The liters of petrol is present in Chef's car
    int Y; // The distance between his house

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // The run each tast case
    {
        scanf("%d %d ", &X, &Y);

        if (Y * 2 <= 15 * X) // The number of distance is less than the petrol present in the car is more then enough to cover the distance
        {
            printf("YES \n"); // If true , print 'YES'
        }
        else
        {
            printf("NO \n"); // IF false , print 'NO'
        }
    }
    return 0;
}
