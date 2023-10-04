#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int friends;
    int x, y; // The mine contains a total of gold and the capacity of every person

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d", &friends, &x, &y);

        friends += 1; // Add one into friends

        if (friends * y >= x) // If friends is mora than equal x
        {
            printf("YES\n"); // If true, print 'YES'
        }
        else
        {
            printf("NO\n"); // If false, print 'NO'
        }
    }
    return 0;
}
