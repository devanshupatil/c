#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int T;    // Denoting the number of tast case
    int X, Y; // Room number of both
    int floor_no = 0;
    int floor_no2 = 0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d", &X, &Y);

        floor_no = X / 10;  // Floor number of chef
        floor_no2 = Y / 10; // Floor number of chefina

        if (X % 10 == 0) // If room number of chef modulo 10 and equal to 0
        {
            floor_no; // If true , we know then
        }
        else
        {
            floor_no++; // If false , add by one
        }

        if (Y % 10 == 0) // If room number of chefina modulo 10 and equal to 0
        {
            floor_no2; // If true , we know then
        }
        else
        {
            floor_no2++; // If false , add by one
        }

        printf("%d\n", abs(floor_no - floor_no2)); // Printing the absolute number to travel to reach Chefina's room
    }
    return 0; // Exit the program
}
