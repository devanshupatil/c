#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int N; // The number of airplanes
    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d", &N);
        int A[N];        // The arrival timings
        int D[N];        // The departure timings
        int Temp[N * 2]; // The Temperature array take for number of plane timing is same then the value assign 0
        int Max_count = 0;

        for (int j = 0; j < N; j++)
        {
            scanf("%d", &A[j]);
        }
        for (int k = 0; k < N; k++)
        {
            scanf("%d", &D[k]);
        }

        int X = 0;
        int x = 0;
        /*Assign array of 'A' value and array of 'D' value into temp array*/
        while (x != N)
        {
            Temp[X] = A[x];
            Temp[X + 1] = D[x];
            x++;
            X += 2;
        }

        /*Check the number of runways neet to Airport*/
        for (int l = 0; l < N * 2; l++)
        {
            int temp = 1; // Assign 1 into temp
            for (int n = l + 1; n < N * 2; n++)
            {
                /*If number are same add one into temp and Temp index of 'l' & 'n' value is not equal to -0*/
                if (Temp[l] == Temp[n])
                {
                    if (Temp[l] != -0 && Temp[n] != -0)
                    {
                        temp++;
                        Temp[n] = -0;
                    }
                }

                if (temp > Max_count) // If temp is mora than Max_count value
                {
                    Max_count = temp; // Assign temp value into Max_count
                }
            }
        }

        printf("%d\n", Max_count); // Print Max_count value
    }

    return 0; // Exit the program
}
