#include <stdio.h>

int main(void)
{

    char A, B;

    scanf("%c %c", &A, &B);

    if (A == 'R' && B == 'B' || A == 'B' && B == 'R' || A == 'R' && B == 'R' || A == 'G' && B == 'R' || A == 'R' && B == 'G')
    {
        printf("R\n");
    }
    else if (A == 'B' && B == 'B' || A == 'G' && B == 'B' || A == 'B' && B == 'G')
    {
        printf("B\n");
    }
    else
    {
        printf("G\n");
    }
    return 0;
}
