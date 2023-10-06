#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int main()
{
    char cmd[100];
    char cwd[PATH_MAX];

    while (1 != 8)
    {
        if (getcwd(cwd, sizeof(cwd)) != NULL)
        {
            printf("%s>>>", cwd);
            fgets(cmd, 100, stdin);
            system(cmd);
            puts(cmd);
            puts("\n");
            puts("\n");
        }
        else
        {
            perror("getcwd() error");
            return 1;
        }
    }
    return 0;
}
