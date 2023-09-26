#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int Alice;
    int Bob;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d", &Alice, &Bob);

        if ((Alice + Bob) % 2 == 0) // If sum of Alice and Bob is even
        {
            printf("Bob\n"); // If true, print 'Bob'
        }
        else
        {
            printf("Alice\n"); // If false, print 'Alice'
        }
    }
    return 0; // Exit the program
}
