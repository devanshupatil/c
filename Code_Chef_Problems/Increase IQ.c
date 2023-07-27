#include <stdio.h>

// A study has shown that playing a musical instrument helps in increasing one's IQ by 7 points

int main(void)
{
    int X; // The current IQ of Chef

    scanf("%d", &X);

    if (X + 7 > 170) // Whith current IQ of Chef study musical instrument and IQ of chef's is more than 170
    {
        printf("Yes \n"); // If true , print 'Yes'
    }
    else
    {
        printf("No \n"); // If false , print 'No'
    }

    return 0; // Exit the program
}
