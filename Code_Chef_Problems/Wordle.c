#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    char hidden_word[6];
    char guess_word[6];

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        getchar();
        fgets(hidden_word, 6, stdin);
        getchar();
        fgets(guess_word, 6, stdin);

        for (int j = 0; j < 5; j++)
        {
            if (hidden_word[j] == guess_word[j]) // If string hidden_word of index is equal to string guess_word of index
            {
                printf("G"); // If true , print 'G'
            }
            else
            {
                printf("B"); // If false , print 'B'
            }
        }
        printf("\n");
    }
    return 0; // Exit the program
}
