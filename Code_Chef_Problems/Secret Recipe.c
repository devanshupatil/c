#include <stdio.h>

int main(void)
{
    int T;                                          // Number of test cases
    int chefPosition, kefaPosition, bottlePosition; // Positions of chef, kefa, and the bottle
    int chefSpeed, kefaSpeed;                       // Speeds of chef and kefa

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Loop through each test case
    {
        scanf("%d %d %d %d %d", &chefPosition, &kefaPosition, &bottlePosition, &chefSpeed, &kefaSpeed);

        // Calculate the time it takes for Chef and Kefa to reach the bottle
        double chefTime = (double)abs(chefPosition - bottlePosition) / chefSpeed;
        double kefaTime = (double)abs(kefaPosition - bottlePosition) / kefaSpeed;

        if (chefTime == kefaTime)
        {
            printf("Draw\n");
        }
        else if (chefTime < kefaTime)
        {
            printf("Chef\n");
        }
        else
        {
            printf("Kefa\n");
        }
    }

    return 0;
}
