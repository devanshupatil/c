#include <stdio.h>

int main(void)
{
    int T;    // Denoting the number of tast case
    int X, Y; // The Hostel is situated at the coordinates
    int K;    // The move of first-yeasr student

    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d", &X, &Y, &K);
        int temp = 0;

        temp = X % K;  // Assign X-coordinate modulo to temp
        if (temp == 0) // If temp is equal to 0
        {
            temp = Y % K;  // If true, Assign Y-coordinate modulo to temp
            if (temp == 0) // If temp is equal to 0
            {
                printf("YES\n"); // If true, print 'YES'
            }
            else
            {
                printf("NO\n"); // If false, print 'NO'
            }
        }
        else
        {
            printf("No\n"); // If false, print 'NO'
        }
    }
    return 0; // Exit the program
}
