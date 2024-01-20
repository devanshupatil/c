#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int OM[n], ADDY[n];
        int streak_om = 0;
        int streak_addy = 0;
        int temp = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &OM[i]);
        }

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ADDY[i]);
        }

        for (int j = 0; j < n; j++)
        {
            if (OM[j] == 0) // If om not solved the problem
            {
                if (streak_om < temp) // If streak of om is less than temp
                {
                    streak_om = temp; // If true, assign temp value into streak of om
                    temp = 0;         // Assign 0 into temp
                }
            }
            temp++; // If true, add by one
        }

        temp = 0; // Assign 0 into temp

        for (int j = 0; j < n; j++)
        {
            if (ADDY[j] == 0) // If addy not solved the problems
            {
                if (streak_addy < temp) // If streak of addy is less than temp
                {
                    streak_addy = temp; // If true, assign temp value into streak of addy
                    temp = 0;           // Assign 0 into temp
                }
            }
            temp++; // If true, add by one
        }

        if (streak_addy > streak_om) // If streak of addy is more than streak of om
        {
            printf("Addy\n"); // If true, print 'Addy'
        }
        else if (streak_om > streak_addy) // If streak of om is more than streak of addy
        {
            printf("Om\n"); // If true, print 'Om'
        }
        else
        {
            printf("Draw\n"); // If false, print 'Draw'
        }
    }

    return 0; // Exit the program
}
