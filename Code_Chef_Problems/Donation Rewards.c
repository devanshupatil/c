#include <stdio.h>

int main(void)
{
    int T; // denoting the number of test cases
    int X; // denoting the number of blood donations the person

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // loop run each tast case
    {
        scanf("%d", &X);

        if (3 >= X) // if the person has made less than or equal to 3 donations
        {
            printf("BRONZE \n"); // if true , print 'BRONZE'
        }
        else if (X > 3 && X <= 6) // if the person has made more than 3 but less than equal to 6  donations
        {
            printf("SILVER \n"); // if true , print 'SILVER'
        }
        else
        {
            printf("GOLD \n"); // if the person has made more than 6  donations
        }
    }
    return 0; // Exit the program
}