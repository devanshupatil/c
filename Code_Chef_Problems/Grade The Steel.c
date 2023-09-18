#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int hardness;
    float Carbon_content;
    int Tensile_strength;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %f %d", &hardness, &Carbon_content, &Tensile_strength);

        if (hardness > 50 && Carbon_content < 0.7 && Tensile_strength > 5600)
        {
            printf("10\n");
        }
        else if (hardness > 50 && Carbon_content < 0.7)
        {
            printf("9\n");
        }
        else if (Carbon_content < 0.7 && Tensile_strength > 5600)
        {
            printf("8\n");
        }
        else if (hardness > 50 && Tensile_strength > 5600)
        {
            printf("7\n");
        }
        else if (hardness > 50 || Carbon_content < 0.7 || Tensile_strength > 5600)
        {
            printf("6\n");
        }
        else
        {
            printf("5\n");
        }
    }
    return 0;
}
