#include <stdio.h>

int main(void)
{
    int arr[100] = {0};
    int T; // Denoting the number of tast case
    int N; // The purchased items
    int X; // The cost of each items
    int length = 0;
    int multiply;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &N, &X);

        multiply = N * X;

        arr[0] = multiply;
    }
    return 0;
}
