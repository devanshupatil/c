#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    char first, second, third;
    char x, y;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        getchar();
        scanf("%c %c %c", &first, &second, &third);
        getchar();
        scanf("%c %c", &x, &y);

        if (x == first || y == first) // If x and y is equal to first
        {
            printf("%c\n", first); // If true, print 'first'
        }
        else
        {
            printf("%c\n", second); // If false, print 'second'
        }
    }
    return 0; // Exit the program
}
