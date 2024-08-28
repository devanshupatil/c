#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
    int n, f;
    char buff[10];

    f = open("seeking", O_RDWR); // Open the file "seeking" for reading and writing
    read(f, buff, 10);           // Read the first 10 characters from the file into buffer
    write(1, buff, 10);          // Write the first 10 characters to the console

    lseek(f, 5, SEEK_CUR); // Move the file pointer 5 characters ahead from the current position

    read(f, buff, 10);  // Read the next 10 characters from the file into the buffer
    write(1, buff, 10); // Write these 10 characters to the console
}
