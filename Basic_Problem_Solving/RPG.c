#include <stdio.h>

int main()
{
    int Character; // Number of character
    int Strength;
    int Agility;
    int Intelligence;

    printf("Enter number of character :");
    scanf("%d", &Character);

    for (int i = 1; i <= Character; i++) // Run each character
    {
        scanf("%d %d %d", &Strength, &Agility, &Intelligence);

        if (10 < Strength && 50 > Strength) // If he Strength is between 10 and 50
        {
            if (5 < Agility && 30 > Agility) // If the Agility is between 5 and 30
            {
                if (1 < Intelligence && 20 > Intelligence) // If the Intellingence is between 1 and 20
                {
                    printf("Valid \n"); // If true , print 'Valid'
                }
                else
                {
                    printf("Invalid \n"); // If false , print 'Invalid'
                }
            }
            else
            {
                printf("Invalid \n"); // If false , print 'Invalid'
            }
        }
        else
        {
            printf("Invalid \n"); // If false , print 'Invalid'
        }
    }

    return 0; // Exit the program
}