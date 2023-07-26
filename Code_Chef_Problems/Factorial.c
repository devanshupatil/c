#include <stdio.h>

int Fact(int n);

int main()
{
    int n;
    scanf("%d", &n);

    printf("Factorial number = %d", Fact(n));
    return 0;
}

int Fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int fact1 = Fact(n - 1);

    int fact2 = fact1 * n;
    return fact2;
}