#include <stdio.h>

int main(void)
{
    int Number_weapons[100] = {0};
    int N; // Denoting the number of tast case
    int even = 0;
    int count_even = 0;
    int count_odd = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) // Run each tast case
    {
        scanf("%d", &Number_weapons[i]);

        even = Number_weapons[i] % 2; // calculating the even number

        if (even == 0) // If the number even if equal to 0
        {
            count_even++; // If true , count 1
        }
        else
        {
            count_odd++; // If false , count 1
        }
    }

    if (count_even > count_odd) // If the count of even is more than count of odd
    {
        printf("READY FOR BATTLE"); // If true , print 'READY FOR BATTLE'
    }
    else
    {
        printf("NOT READY"); // If false , print 'NOT READY'
    }
    return 0; // Exit the program
}
