#include <stdio.h>
#include <math.h>

int main()
{
    int T; // Denoting the number of tast case
    int N; // Number of friends
    int Number_cars = 0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d", &N);

        Number_cars = 0;

        if (N > 4) // If the number of friends is more than 4
        {
            Number_cars = ceil(N / 4.0); // If true , The number of friends divide by 4

            printf("%d\n", Number_cars); // print number of cars required to friends
        }
        else
        {
            printf("1\n"); // If false , print '1'
        }
    }
    return 0; // Exit the program
}