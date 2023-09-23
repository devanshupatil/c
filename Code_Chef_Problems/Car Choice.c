#include <stdio.h>

int main(void)
{
    int T;        // Denoting the number of tast case
    float x1, x2; // Car runs in diesel and petrol
    float y1, y2; // The current price of diesel and petrol

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%f %f %f %f", &x1, &x2, &y1, &y2);

        float car1 = 0;
        float car2 = 0;

        car1 = y1 / x1;
        car2 = y2 / x2;

        if (car1 < car2) // If car1 is less tha car2
        {
            printf("-1\n"); // If true, print '-1'
        }
        else if (car2 < car1) // If car2 is less tha car1
        {
            printf("1\n"); // If true, print '1'
        }
        else
        {
            printf("0\n"); // If false, print '0'
        }
    }
    return 0; // Exit the program
}
