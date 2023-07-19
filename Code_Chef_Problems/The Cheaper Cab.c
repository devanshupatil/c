#include <stdio.h>
// Chef wants to spend the minimum amount of money. Which cab service should Chef take?

int main(void)
{
    int T; // The number of test cases
    int X; // The first cab service charges rupees
    int Y; // The second cab service charges rupees

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // loop run each test case
    {
        scanf("%d %d", &X, &Y);

        if (X < Y) // if the first cab service is cheaper then second
        {
            printf("FIRST \n"); // if true, 'FIRST'
        }
        else if (X == Y) // if both cab services have the same price
        {
            printf("ANY \n"); // if true, 'ANY'
        }
        else if (X > Y) // if the second cab service is cheaper then first
        {
            printf("SECOND \n"); // if true, 'SECOND'
        }
    }
    return 0; // Exit the program
}