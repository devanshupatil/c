#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int A1, A2, A3, A4, A5, A6, A7, A8, A9, A10;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d %d %d %d %d %d %d %d", &A1, &A2, &A3, &A4, &A5, &A6, &A7, &A8, &A9, &A10);

        int Team_1 = A1 + A3 + A5 + A7 + A9;
        int Team_2 = A2 + A4 + A6 + A8 + A10;

        if (Team_1 == Team_2) // If first team score is equal to second team
        {
            printf("0\n"); // If true, print '0'
        }
        else if (Team_1 > Team_2) // If first team score is more then to second team
        {
            printf("1\n"); // If true, print '1'
        }
        else
        {
            printf("2\n"); // If false, print '2'
        }
    }
    return 0; // Exit the program
}
