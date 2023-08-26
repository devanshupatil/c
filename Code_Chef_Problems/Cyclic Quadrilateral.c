int main(void)
{
    int T;          // Denoting the number of tast case
    int A, B, C, D; // Point of quadrilateral
    int sum;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d %d", &A, &B, &C, &D);

        sum = 0;

        if (A < 180 && C < 180) // If angles A and C is less than 180
        {
            sum = A + C; // If true , Add A and C
        }
        else if (B < 180 && D < 180) // If angles B and D is less than 180
        {
            sum = B + D; // If true , Add B and D
        }

        if (sum == 180) // If sum of AC or BD is equal to 180
        {
            printf("YES\n"); // If true , print 'YES'
        }
        else
        {
            printf("NO\n"); // If false , print 'NO'
        }
    }
    return 0; // Exit the program
}
