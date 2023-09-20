#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int T; // Denoting the number of tast case
    char character;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        getchar();
        scanf("%c", &character);

        character = toupper(character); // Converts a character to uppercase

        if (character == 'B') // If character is equal to B
        {
            printf("BattleShip\n"); // If true, print 'BattleShip'
        }
        else if (character == 'C') // If character is equal to C
        {
            printf("Cruiser\n"); // If true, print 'Cruiser'
        }
        else if (character == 'D') // If character is equal to D
        {
            printf("Destroyer\n"); // If true, print 'Destroyer'
        }
        else if (character == 'F') // If character is equal to F
        {
            printf("Frigate\n"); // If true, print 'Frigate'
        }
    }
    return 0; // Exit the program
}
