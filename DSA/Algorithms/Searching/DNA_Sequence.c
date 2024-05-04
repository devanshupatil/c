#include <stdio.h>

int main()
{
    char DNA_Sequences[61] = {"ATCGTACGATCGATCGATCG"
                              "CGATCGATCGATCGATCGAT"
                              "ATCGATCGATCGATCGATCG"};
    char Specific_Gene[] = {"ATCGATCGATCG"};
    int Specific_Gene_size = sizeof(Specific_Gene) / sizeof(char);
    int count = 0;
    int j = 0;

    for (int i = 0; i < 61; i++)
    {
        if (DNA_Sequences[i] == Specific_Gene[j])
        {
            count++;
            j++;
        }
        else
        {
            j = 0;
            count = 0;
        }

        if (count == (Specific_Gene_size - 2))
        {
            break;
        }
    }

    if (count == (Specific_Gene_size - 2))
    {
        printf("The specific gene is match!");
    }
    else
    {
        printf("The specific gene is not match!");
    }

    return 0;
}