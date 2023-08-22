#include <stdio.h>

int main(void)
{
    int T;              // Denoting the number of tast case
    int X1, Y1, X2, Y2; // The Chessboard Distance for any two points
    int Distance1 = 0;
    int Distance2 = 0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);

        Distance1 = X1 - X2; // Distance of first two points
        Distance2 = Y1 - Y2; // Distance of second two points

        if (Distance1 < 0) // If Distance of first two points is less than 0
        {
            Distance1 = 0 - (Distance1); // If true , convert negative into positive
        }
        if (Distance2 < 0) // If Distance of second two points is less than 0
        {
            Distance2 = 0 - (Distance2); // If true , convert negative into positive
        }

        if (Distance1 > Distance2) // If Distance of first two point is more tham second distance of point
        {
            printf("%d\n", Distance1); // If true , print 'First distance'
        }
        else
        {
            printf("%d\n", Distance2); // If false , print 'Second distance'
        }
    }
    return 0; // Exit the program
}
