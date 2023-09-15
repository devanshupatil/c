#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 2;
    const int MAX = 100;
    int Guess;
    int Guesses;
    int answer;

    srand(time(0)); // User current time

    answer = (rand() % MAX) + MIN; // The range of random number 1 to 100, assign into answer

    while (answer != Guess) // If random number is not equal to guess of user
    {
        printf("Enter Guess: ");
        scanf("%d", &Guess);

        if (Guess > answer) // If guess is more than random number
        {
            printf("Too high!\n"); // If true , print 'Too high!'
        }
        else if (Guess < answer) // If guess is less than random number
        {
            printf("Too low!\n"); // If true , print 'Too low!'
        }
        else
        {
            printf("CORRECT!\n"); // If false , print 'CORRECT!'
        }
        Guesses++; // Add by one\

    }
    for (int i = 0; i < 10; i++)
        if (Guesses == i)
        {
            printf("Excellent!\n");
        }

    for (int i = 10; i < 50; i++)
        if (Guesses == i)
        {
            printf("Good!\n");
        }

    for (int i = 50; i < 100; i++)
        if (Guesses == i)
        {
            printf("Not bad :(\n");
        }

    printf("**********************\n");
    printf("Answer: %d\n", answer);   // Print random number
    printf("Guesses: %d\n", Guesses); // Print guesses
    printf("**********************\n");

    return 0; // Exit the program
}