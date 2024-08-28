#include <unistd.h>
#include <stdio.h>
int main()
{
    // Write
    int count;
    count = write(1, "hello\n", 6);
    printf("Total bytes written: %d\n", count);

    // Read
    char buff[20];
    read(0, buff, 10);  // read 10 bytes from standard input device(keyboard), store in buffer (buff)
    write(1, buff, 10); // print 10 bytes from the buffer on the screen
}