#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int H; // House in chefland
    int x; // Liters of water every week per house
    int y; // Liters of water use every week per household
    int C; // Liters of water is available for the entire Chefland

    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d %d", &H, &x, &y, &C);

        int Use_of_water_in_one_house;

        Use_of_water_in_one_house = x + (y / 2); // calculate the number of water using one home

        int Number_of_home_water;

        Number_of_home_water = H * Use_of_water_in_one_house; // Calculate the number of water use in per home in ChefLand

        if (Number_of_home_water <= C) // If number of homes use water if less than Liters of water is available in Chefland
        {
            printf("YES\n"); // If true, print "YES"
        }
        else
        {
            printf("NO\n"); // If false, print "NO"
        }
    }

    return 0; // Exit the program
}
