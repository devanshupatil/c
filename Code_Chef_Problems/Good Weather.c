#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int day[7];

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        for (int k = 0; k < 7; k++)
            scanf("%d", &day[k]);

        int rainy = 0;
        int sunny = 0;

        for (int j = 0; j < 7; j++)
        {

            if (day[j] == 1) // If day of index value is equal to 1
            {
                sunny++; // If true , add sunny by one
            }
            else if (day[j] == 0) // If day of inedx value is equal to 0
            {
                rainy++; // If true , add rainy by one
            }
            else
            {
                printf("Invalid!\n"); // If false , print 'Invalid!'
            }
        }

        if (rainy < sunny) // If rainy count is less than sunny count
        {
            printf("YES\n"); // If true , print 'YES'
        }
        else
        {
            printf("NO\n"); // If false , print 'NO'
        }
    }
    return 0; // Exit the program
}
