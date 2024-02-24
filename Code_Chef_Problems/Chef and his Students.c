#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case

    scanf("%d", &T);
    getchar();
    while (T--) // Runeach tast case
    {
        char S[100002];
        int count = 0;
        int i = 0;

        fgets(S, 100002, stdin);

        while (S[i] != NULL)
        {
            if (S[i] == '<' && S[i + 1] == '>')
            {
                count++;
            }
            i++;
        }

        printf("%d\n", count);
    }
    return 0;
}
