#include <stdio.h>

int main(void)
{
    int T; // Denoting thenumber of tast case
    int N; // Number of gold coins

    scanf("%d", &T);

    while (T--) // Run each tast case
    {
        scanf("%d", &N);

        int count = 0;
        int temp = N;
        int level = 1;

        while (1)
        {
            if (temp >= level) // If temp is more than equal to level
            {
                temp = temp - level; // If true, Subtractive temp value into level and assign into temp
                count++;             // add by one
                level++;             // add by one
            }
            else
            {
                break; // If false, End the loop
            }
        }

        printf("%d\n", count); // Print count
    }
    return 0; // Exit the program
}
