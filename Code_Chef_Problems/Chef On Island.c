#include <stdio.h>
#include <math.h>

int main(void)
{
    int T;      // Denoting the number of tast case
    int x, y;   // The number of food and water
    int x1, y1; // The chef neet number of food and water
    int day;
    float food_supply;
    float water_supply;
    float minimum;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d %d %d", &x, &y, &x1, &y1, &day);

        food_supply = x / x1;  // Calculating the food supply
        water_supply = y / y1; // Calculating the water supply
        minimum = water_supply;

        if (minimum > food_supply)
        {
            minimum = food_supply;
        }

        if (minimum >= day) // If the mininum value is equal to day
        {
            printf("YES\n"); // If true, print 'YES'
        }
        else
        {
            printf("NO\n"); // If false, print 'NO'
        }
    }
    return 0;
}
