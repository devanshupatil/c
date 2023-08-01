#include <stdio.h>

int main()
{
    int PointDif[100] = {0};
    int TotalMatchs; // Number of total match's oraganiz
    int TotalTeams;  // Number of total teams
    int Goal1;       // Goal of first team
    int Goal2;       // Goal of second team
    int Team1Index;  // Name of first team
    int Team2Index;  // Name of second team

    printf("Enter total team's :");
    scanf("%d", &TotalTeams);

    printf("Enter total match's :");
    scanf("%d", &TotalMatchs);

    for (int i = 0; i < TotalMatchs; i++) // Run each match
    {
        scanf("%d %d %d %d", &Team1Index, &Goal1, &Team2Index, &Goal2);

        if (Goal1 == Goal2) // If the first team goal is equal to second team goal
        {
            PointDif[Team1Index] = PointDif[Team1Index] + 1; // If true , add one point into specific name of team
            PointDif[Team2Index] = PointDif[Team2Index] + 1; // If true , add one point into specific name of team
        }
        else if (Goal1 > Goal2) // If the first team goal is more than second team goal
        {
            PointDif[Team1Index] = PointDif[Team1Index] + 3; // If true , add three point into specific name of team
        }
        else
        {
            PointDif[Team2Index] = PointDif[Team2Index] + 3; // If true , add three point into specific name of team
        }

        for (int j = 0; j < 100; j++) // Run all index in array
        {
            if (PointDif[j] > 0) // If the array of index value is more than zero
            {
                printf("Team name is %d : %d Point \n", j, PointDif[j]); // If true , print specific name of teams and point of teams
            }
        }
    }
    return 0; // Exit the program
}
