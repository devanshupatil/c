#include <stdio.h>

int main(void)
{
    int T;
    int X, Y, P, Q;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d %d", &X, &Y, &P, &Q);

        int Chef = 0;
        int Chefina = 0;

        Chef = X + (P * 10);
        Chefina = Y + (Q * 10);

        if (Chef < Chefina)
        {
            printf("Chef\n");
        }
        else if (Chefina < Chef)
        {
            printf("Chefina\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
    return 0;
}
