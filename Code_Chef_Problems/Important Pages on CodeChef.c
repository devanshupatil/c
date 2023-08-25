#include <stdio.h>

int main(void)
{
    int A; // if the user has submitted on the practice page
    int B; // if the user has participated in a contest

    scanf("%d %d", &A, &B);

    if (A == 0) // if the user has not submitted on the practice page
    {
        printf("https://www.codechef.com/practice\n"); // if true , print 'https://www.codechef.com/practice'
    }
    else if (A == 1 && B == 0) // If the user has submitted on the practice page but not participated in a contest
    {
        printf("https://www.codechef.com/contests\n"); // If true , print 'https://www.codechef.com/contests'
    }
    else
    {
        printf("https://discuss.codechef.com\n"); // If false , print 'https://discuss.codechef.com'
    }
    return 0; // Exit the program
}
