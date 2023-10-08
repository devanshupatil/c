#include <stdio.h>

int main(void)
{
    int T;
    int day;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &day);

        int Alice[day];
        int Bob[day];
        int a = 0;
        int b = 0;
        int count = 0;

        for (int j = 0; j < day; j++)
        {
            scanf("%d", &Alice[j]);
        }

        for (int k = 0; k < day; k++)
        {
            scanf("%d", &Bob[k]);
        }

        for (int l = 0; l < day; l++)
        {
            a = Alice[l];
            b = Bob[l];

            if (a == b)
            {
                count++;
            }
            else if (a > b)
            {
                a = a / 2;

                if (a <= b)
                {
                    count++;
                }
            }
            else
            {
                b = b / 2;

                if (b <= a)
                {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
