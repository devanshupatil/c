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
        int count = 0;
        int temp = 0;

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

        /*Check the same value in 'Temp' array, And it's same assign 0*/
        for (int l = 0; l < N * 2; l++)
        {
            for (int h = l + 1; h < N * 2; h++)
            {
                if (Temp[l] == Temp[h])
                {
                    if (Temp[l] != 0 && Temp[h])
                    {
                        temp = Temp[l];
                        Temp[l] = 0;
                        Temp[h] = 0;
                    }
                }
                if (temp == Temp[h])
                {
                    Temp[h] = 0;
                }
            }
        }

        /*The count of Zero's*/
        for (int g = 0; g < N * 2; g++)
        {
            if (Temp[g] == 0)
            {
                count++;
            }
        }

        /*Check the arrival timings and departure timings, If both timings match two another plane timing */
        for (int a = 0; a < N; a++)
        {
            for (int b = a + 1; b < N; b++)
            {
                if (A[a] == A[b] && D[a] == D[b])
                {
                    count -= 2;
                }
            }
        }

        if (count == 0) // If count is equal to 0
        {
            count++; // If true, add by one
        }
        printf("count = %d\n", count); // print the count value
    }
}
