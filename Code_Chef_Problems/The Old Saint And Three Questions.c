#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int A[3];
    int B[3];

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &A[i]);
        }
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &B[j]);
        }

        int Yes = 0;
        int No = 0;

        for (int k = 0; k < 3; k++)
        {
            if (A[k] == 1)
            {
                Yes++;
            }
            else
            {
                No++;
            }
        }

        for (int l = 0; l < 3; l++)
        {
            if (B[l] == 1)
            {
                Yes++;
            }
            else
            {
                No++;
            }
        }

        if (Yes > No)
        {
            printf("Pass\n");
        }
        else
        {
            printf("Fail\n");
        }
    }
    return 0;
}
