#include <stdio.h>

int main(void)
{
    int T; // Denting the number of tast case
    int N; // The number of expenses
    int X; // The  monthly income of Chef
    int haft_income = 0;
    int monthly_income;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d", &N, &X);

        monthly_income = 2; // Assigning 2

        for (int k = 1; k < X; k++)
        {
            monthly_income *= 2; // calculating the monthly income
        }

        for (int j = 0; j < N; j++) // Run each expenses
        {
            haft_income = monthly_income / 2;           // calculating the haft spends monthly income
            haft_income = monthly_income - haft_income; // calculating the remaining amount
            monthly_income = haft_income;               // Assigning the remaining amount
        }

        printf("%d\n", haft_income); // printing the remaining amount
    }
    return 0; // Exit the program
}
