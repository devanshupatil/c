#include <stdio.h>

int main(void)
{
    int T;       //  The number of each test cases
    float N = 0; // The total number of members present in parliament
    float X = 0; // The number of members who voted in favour of the resolution
    double Z = 0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // The run each test case
    {
        scanf("%f %f", &N, &X);

        Z = N / 2; // Helf of the total number of members present in parliament

        if (Z <= X) //  Helf of the total number of members present in parliament is equal or more than the number of members who voted in favour of the resolution
        {
            printf("YES \n"); // If true, print 'YES'
        }

        else
        {
            printf("NO \n"); // If false, print 'NO'
        }
    }
    return 0; // Exit the program
}
