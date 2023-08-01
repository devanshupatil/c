#include <stdio.h>

int main()
{
    int GoalDif[100] = {0};
    int Goal1;          // Goal of fiest team
    int Goal2;          // Goal of second team
    int Team1Index;     // Name of first team
    int Team2Index;     // Name of second team
    int TotalTeams;     // Number of  participating team's
    int TotalMatch = 0; //  How many match's oraganiz
    int Factorial = 0;
    int Factorial2 = 0;
    int goaldif1 = 0;
    int goaldif2 = 0;
    int list = 0;

    printf("Enter number of teams :");
    scanf("%d", &TotalTeams);

    Factorial = TotalTeams; // Assigning the value

    for (int i = 1; i < TotalTeams; i++)
    {
        Factorial *= i; // Factorial of Total teams
    }

    Factorial2 = TotalTeams - 2; // Assigning the value

    for (int j = 1; j < TotalTeams - 2; j++)
    {
        Factorial2 *= j; // Factorial of Total teams - 2
    }

    TotalMatch = (Factorial / Factorial2) / 2; // Calculating the Total match's oraganiz

    printf("Note:- First enter name of team then enter the goal's of team same as second team, Please enter only whole number's. \n");

    for (int i = 0; i < TotalMatch; i++) // Total of match
    {
        scanf("%d %d %d %d", &Team1Index, &Goal1, &Team2Index, &Goal2);

        goaldif1 = Goal1 - Goal2; // Goal difference of this match team(1)
        goaldif2 = Goal2 - Goal1; // Goal difference of this match team(2)

        GoalDif[Team1Index] += goaldif1; // Update the goal difference for each team whit previous value of goal difference
        GoalDif[Team2Index] += goaldif2;
    }

    for (int i = 1; i < 100; i++)
    {
        if (GoalDif[i] >= GoalDif[list]) // The maximum goal difference among all teams
        {
            list = i; // Assigning the name of team that have more goal difference to all team's
        }
    }
    printf("The more Goal of team is %d", list); // Printing the name of team that have more Goal's

    return 0; // Exit the program
}