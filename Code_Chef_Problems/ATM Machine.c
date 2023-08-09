#include <stdio.h>

int main()
{
    int people[100] = {0};
    int T; // Denoting the numbrt of tast case
    int K; // Number of unit of money
    int N; // Number of people want to withdraw money
    int unit_money = 0;

    printf("Enter number of tast case : ");
    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        printf("\n");
        printf("Enter number of people and unit of money : ");
        scanf("%d %d", &N, &K);
        unit_money = K; // Assigning the unit of money

        printf("Enter withdraw amount\n");
        for (int j = 0; j < N; j++) // Read each input
        {
            scanf("%d", &people[j]);
        }
        for (int l = 0; l < N; l++)
        {
            if (people[l] <= unit_money) // If unit of money is more than people what to withdraw
            {
                unit_money -= people[l]; // If true , people withdarw that amount subtract total unit of money
                printf("1");             // If true , print '1'
            }
            else
            {
                printf("0"); // If false , print '0'
            }
        }
    }
    return 0; // Exit the program
}
