#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int N;
    int count;
    char str[100];

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);

        for (int j = 0; j < N; j++)
        {
            fgets(str, 20, stdin);

            if (str[i] != 'a' || str[i] != 'e' || str[i] != 'i' || str[i] != 'o' || str[i] != 'u')
            {
                count++;
            }

            else
            {
                count = 0;
            }

            if (count == 4)
            {
                printf("NO\n");
                break;
            }
            else
            {
                printf("YES\n");
                break;
            }
        }
    }
    return 0;
}
