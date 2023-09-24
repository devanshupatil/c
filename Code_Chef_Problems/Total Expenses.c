#include <stdio.h>

int main(void)
{
    int T;
    float quantity;
    float price;
    float total;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%f %f", &quantity, &price);

        if (quantity > 1000)
        {
            printf("%f\n", (quantity * price) * .9);
        }
        else
        {
            printf("%f\n", quantity * price);
        }
    }
    return 0;
}
