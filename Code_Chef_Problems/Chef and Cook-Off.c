#include <stdio.h>

int main(void)
{
    int T;      // Denoting the numbre of tast case
    int arr[5]; // Number of problems solved

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int temp = 0;
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[j]);
            temp += arr[j]; // Sum of array of jth index value in temp
        }

        if (temp == 0) // If temp is equal to 0
        {
            printf("Beginner\n"); // If true, print 'Beginner'
        }
        else if (temp == 1) // If temp is equal to 1
        {
            printf("Junior Developer\n"); // If true, print 'Junior Developer'
        }
        else if (temp == 2) // If temp is equal to 2
        {
            printf("Middle Developer\n"); // If true, print 'Middle Developer'
        }
        else if (temp == 3) // If temp is equal to 3
        {
            printf("Senior Developer\n"); // If true, print 'Senior Developer'
        }
        else if (temp == 4) // If temp is equal to 4
        {
            printf("Hacker\n"); // If true, print 'Hacker'
        }
        else if (temp == 5) // If temp is equal to 5
        {
            printf("Jeff Dean\n"); // If true, print 'Jeff Dean'
        }
    }
    return 0; // Exit the program
}
