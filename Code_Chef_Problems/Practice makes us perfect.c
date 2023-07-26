#include <stdio.h>

int main(void)
{
    int P1, P2, P3, P4; // Question solve in each weeks
    int count = 0;

    scanf("%d %d %d %d ", &P1, &P2, &P3, &P4);

    if (P1 >= 10) // The Question solve in weeks is equal or more than 10
    {
        count++; // IF true , count the week
    }
    if (P2 >= 10)
    {
        count++;
    }
    if (P3 >= 10)
    {
        count++;
    }
    if (P4 >= 10)
    {
        count++;
    }

    printf("%d", count); // print 'count pf each weeks'
    return 0;
}