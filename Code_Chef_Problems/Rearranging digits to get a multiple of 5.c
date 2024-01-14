#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int length_digit;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &length_digit);

        int rearranging = 0;
        char array[length_digit];

        for (int j = 0; j < length_digit; j++)
        {
            getchar();
            scanf("%c", &array[j]);
            rearranging += array[j];
        }
    }
    return 0; // Exit the program
}
