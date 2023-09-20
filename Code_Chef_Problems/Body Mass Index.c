#include <stdio.h>

int main(void)
{
    int T;      // Denoting the number of tast case
    int Mass;   // Mass of chef
    int Height; // Height of chef

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d", &Mass, &Height);

        if (Mass / (Height * Height) <= 18) // If BMI is less than equal to 18
        {
            printf("1\n"); // If true, print '1'
        }
        else if (Mass / (Height * Height) == 19 || Mass / (Height * Height) == 20 || Mass / (Height * Height) == 21 || Mass / (Height * Height) == 22 || Mass / (Height * Height) == 23 || Mass / (Height * Height) == 24) // If BMI is equal to (19.....24)
        {
            printf("2\n"); // If true, print '2'
        }
        else if (Mass / (Height * Height) == 25 || Mass / (Height * Height) == 26 || Mass / (Height * Height) == 27 || Mass / (Height * Height) == 28 || Mass / (Height * Height) == 29) // If BMI is equal to (25.....29)
        {
            printf("3\n"); // If true, print '3'
        }
        else if (Mass / (Height * Height) >= 30) // If BMI is more than equal to 30
        {
            printf("4\n"); // If true, print '4'
        }
    }
    return 0;
}
