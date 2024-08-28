#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
// #include <sys/wait.h>

int main()
{
    pid_t pid = fork();

    if (pid < 0)
    {
        perror("Fork failed");
        return 1;
    }
    else if (pid == 0)
    {
        printf("This is the child process\n");
    }
    else
    {
        printf("This is the parent process\n");
        wait(NULL); // Wait for the child process to complete
    }

    return 0;
}
