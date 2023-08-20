#include <stdio.h>

int main(void)
{
	int T; // Denoting the number of tast case
	int N; // Number of candies
	int M; // Number of friends

	scanf("%d", &T);

	for (int i = 0; i < T; i++) // Run each tast case
	{
		scanf("%d %d", &N, &M);

		if (N % M == 0) // If Number of candies modulo Number of friends is equal to 0
		{
			if ((N / M) % 2 == 0) // If true , If Number of candies divide by Number of friends is modulo equal to 0
			{
				printf("YES\n"); // If true , print 'YES'
			}
			else
			{
				printf("NO\n"); // If false , print 'NO'
			}
		}
		else
		{
			printf("NO\n"); // If false , print 'NO'
		}
	}
	return 0; // Exit the program
}
