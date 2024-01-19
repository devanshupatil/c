#include <stdio.h>

int main(void)
{
    int Rank;

    scanf("%d", &Rank);

    if (Rank <= 50) // If rank value is less than or equal to 50
    {
        printf("100\n"); // If true, print '100'
    }
    else if (Rank > 50 && Rank <= 100) // If rank value is more than 50 and less tha or equal to 100
    {
        printf("50\n"); // If true, print '50'
    }
    else
    {
        printf("0\n"); // If false, print '0'
    }
}
