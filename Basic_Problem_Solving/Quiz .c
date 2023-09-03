#include <stdio.h>
#include <string.h>

struct Quiz
{
    char answer;
};

int main()
{
    struct Quiz questions;

    int count = 0;

    printf("Q1. Which one of the following method of revenue assessment is related to the Vijayanagara Empire?\n");
    printf("A. Chauth\n");
    printf("B. Ryotwari\n");
    printf("C. Rae Rekho\n");
    printf("D. Sardeshmukhi\n"); //
    printf("\n");

    printf("Enter Answe :");

    scanf("%c", &questions.answer);

    if (questions.answer == 'D')
    {
        printf("\n");
        printf("Your answer is correct.\n");
        printf("\n");
        printf("Explanation : ‘Sardeshmukhi’ is an additional 10% tax levied upon the collected ‘Chauth’. The reasons for the additional tax was due to the King claiming hereditary rights upon the tax collection. This revenue assessment is related to the Vijayanagara Empire.\n");
        count++;
    }
    else
    {
        printf("Your answer is not correct. Correct answer was D\n");
    }

    printf("\n");
    printf("\n");

    printf("Q2. Chhatrapati Shivaji Maharaj crowned himself at\n");
    printf("A. Poona\n");
    printf("B. Konkan\n");
    printf("C. Bijapur\n");
    printf("D. Raigarh\n"); //
    printf("\n");

    printf("Enter Answe :");

    getchar();

    scanf("%c", &questions.answer);

    if (questions.answer == 'D')
    {
        printf("\n");
        printf("Your answer is correct.\n");
        count++;
    }
    else
    {
        printf("Your answer is not correct. Correct answer was D\n");
    }

    printf("\n");
    printf("\n");

    printf("Q3. Chhatrapati Shivaji Maharaj maintained a fleet at\n");
    printf("A. Surat\n");
    printf("B. Calicut\n");
    printf("C. Bombay\n");
    printf("D. Kolaba\n"); //
    printf("\n");

    printf("Enter Answe :");
    getchar();

    scanf("%c", &questions.answer);

    if (questions.answer == 'D')
    {
        printf("\n");
        printf("Your answer is correct.\n");
        printf("\n");
        printf("Explanation : Chhatrapati Shivaji Maharaj maintained a fleet at Kolaba to plunder the Mughal trading vessels and also to check the pirates.\n");
        count++;
    }
    else
    {
        printf("Your answer is not correct. Correct answer was D\n");
    }

    printf("\n");
    printf("\n");

    printf("Q4. Chhatrapati Shivaji Maharaj submitted to Jai Singh and signed the treaty of\n");
    printf("A. Poona\n");
    printf("B. Purandhar\n"); //
    printf("C. Konkan\n");
    printf("D. Surat\n");
    printf("\n");

    printf("Enter Answe :");
    getchar();

    scanf("%c", &questions.answer);

    if (questions.answer == 'B')
    {
        printf("\n");
        printf("Your answer is correct.\n");
        printf("\n");
        printf("Explanation : The Treaty of Purandar was signed on June 11, 1665, between the Rajput ruler Jai Singh I, who was commander of the Mughal Empire, and Maratha Chhatrapati Shivaji Maharaj. Shivaji was forced to sign the agreement after Jai Singh besieged Purandar fort.\n");
        count++;
    }
    else
    {
        printf("Your answer is not correct. Correct answer was B\n");
    }

    printf("\n");
    printf("\n");

    printf("Q5. Under Chhatrapati Shivaji Maharaj rule, the head of a unit of 25 in the Cavalry was known as\n");
    printf("A. Jumadar\n");
    printf("B. Havaldar\n"); //
    printf("C. Faujdar\n");
    printf("D. Hazari\n");
    printf("\n");

    printf("Enter Answe :");

    getchar();
    scanf("%c", &questions.answer);

    if (questions.answer == 'B')
    {
        printf("\n");
        printf("Your answer is correct.\n");
        printf("\n");
        printf("Explanation : One unit in the cavalry was formed of 25 troopers; over them was placed a havaldar, and five havaldars formed one jumla under a jumladar. Ten jumladars made a hazari charge, and five hazaris were placed under a panjhazari, who was given a salary of 2000 huns.\n");
        count++;
    }
    else
    {
        printf("Your answer is not correct. Correct answer was B\n");
    }

    printf("\n");
    printf("\n");

    printf("Your total score is  5 / %d\n", count);
    return 0;
}