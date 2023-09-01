#include <stdio.h>
#include <string.h>
#include <conio.h>

/*
    Let us work on the menu of a library. Create a structure containing book
    information like accession number, name of author, book title and flag to
    know whether book is issued or not.
      Create a menu in which the following can be done.
        1 - Display book information
        2 - Add a new book
        3 - Display all the books in the library of a particular author
        4 - Display the number of books of a particular title
        5 - Display the total number of books in the library
        6 - Issue a book
    (If we issue a book, then its number gets decreased by 1 and if we add a book,
    its number gets increased by 1)
*/
struct Book
{
    int accession_number;
    char author[100];
    char title[100];
    char is_issue[100];
};

struct Library
{
    struct Book books[100];
};

int main()
{
    struct Library lib;

    lib.books[0].accession_number = 1;

    int menu;

    printf("In menu which one you have to do, If don't enter '0'.\n");
    printf("    1 - Display book information.\n");
    printf("    2 - Add a new book.\n");
    printf("    3 - Display all the books in the library of a particular author.\n");
    printf("    4 - Display the number of books of a particular title.\n");
    printf("    5 - Display the total number of books in the library.\n");
    printf("    6 - Issue a book.\n");

    printf("Enter number : ");
    scanf("%d", &menu);

    int count = 0;
    int count_author_books = 0;
    int count_title_books = 0;
    char author[25];
    char title[25];
    char issue[5];

    while (menu != 0)
    {
        if (menu == 1)
        {
            if (count != 0)
            {
                for (int n = 0; n < count; n++)
                {
                    printf("%d\n", lib.books[n].accession_number);
                    printf("%s\n", lib.books[n].author);
                    printf("%s\n", lib.books[n].title);
                    printf("%s\n", lib.books[n].is_issue);
                }
            }
            else
            {
                printf("In library no book is availble.\n");
            }
        }
        else if (menu == 2)
        {
            printf("Enter the accession number of book : ");
            scanf("%d", &lib.books[count].accession_number);
            getchar();

            printf("Enter the author of book : ");
            fgets(lib.books[count].author, 100, stdin);

            printf("Enter the title of book : ");
            fgets(lib.books[count].title, 100, stdin);

            strcpy(lib.books[count].is_issue, "Not issued");

            count++;
        }
        else if (menu == 3)
        {
            printf("\n");
            printf("note - Pless enter in small letters.\n");
            printf("\n");

            printf("Enter book author : ");
            getchar();
            fgets(author, 25, stdin);

            count_author_books = 0;

            for (int i = 0; i < count; i++)
            {
                if (strcmp(lib.books[i].author, author) == 0)
                {
                    count_author_books++;
                }
            }

            printf("The total books in the library of author = %d", count_author_books);
        }
        else if (menu == 4)
        {
            printf("\n");
            printf("note - Pless enter in small letters.\n");
            printf("\n");

            printf("Enter book title : ");
            getchar();
            fgets(title, 25, stdin);

            count_title_books = 0;

            for (int j = 0; j < count; j++)
            {
                if (strcmp(lib.books[j].title, title) == 0)
                {
                    count_title_books++;
                }
            }
            printf("The total books in the library of title = %d", count_title_books);
        }
        else if (menu == 5)
        {
            printf("The total number of books in library = %d", count);
        }
        else if (menu == 6)
        {
            printf("\n");
            printf("Note - You want to issue a book enter 'yes' or 'YES', if you dount what to issue enter 'no' or 'NO'. \n");
            printf("\n");

            printf("You want to issue or not : ");
            scanf("%s", &issue);

            if (count != 0)
            {
                if (issue[0] == 'y' && issue[1] == 'e' && issue[2] == 's' || issue[0] == 'Y' && issue[1] == 'E' && issue[2] == 'S')
                {
                    count--;
                    strcpy(lib.books[count].is_issue, "issued");
                }
                else
                {
                    printf("Invalid sentence.\n");

                    printf("Note - You want to issue a book enter 'yes' or 'YES', if you dount what to issue enter 'no' or 'NO'. \n");
                }
            }
            else
            {
                printf("Books not available in library to issued.\n");
            }
        }

        printf("\n");
        printf("Enter number in menu : ");
        scanf("%d", &menu);
    }

    return 0;
}