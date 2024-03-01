#include <stdio.h>

int check(int limak, int bob)
{
    int count_limka = 0, count_bob = 0;
    int i = 1;
    while (count_limka <= limak && count_bob <= bob) // If count_limka is less than equal to limka and  count_bob is less than equal to bob
    {
        count_limka += i++;

        if (count_limka > limak) // If count_limka is more than limka
        {
            break; // If true, break the loop
        }

        count_bob += i++;
    }
    if (count_bob > bob) // If count_bob is more than bob
    {
        return 1; // If true, Return 1
    }
    else
    {
        return 0; // Exit the function
    }
}

int main(void)
{
    int T; // Denoting the number fo tast case
    int A, B;

    scanf("%d", &T);

    while (T--) // Run each tast case
    {
        scanf("%d %d", &A, &B);

        int winner = check(A, B); // Check function returning '1' and '0'

        if (winner == 1) // If winner is equal to 1
        {
            printf("Limak\n"); // If true, print Limka
        }
        else
        {
            printf("Bob\n"); // If false, print Bob
        }
    }
    return 0; // Exit the program
}
