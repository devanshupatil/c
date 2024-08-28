// open.c
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
    int n, fd;
    char buff[50];

    // opens test.txt in read mode and the file descriptor is saved in integer fd.
    fd = open("test.txt", O_RDONLY);

    // the value of the file descriptor is printed.
    printf("The file descriptor of the file is: %d\n", fd);

    // read 10 characters from the file pointed to by file descriptor fd and save them in buffer (buff)
    n = read(fd, buff, 10);

    // write on the screen from the buffer
    write(1, buff, n);
}