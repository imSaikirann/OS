#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<fcntl.h>

void main()
{
    int fd = open("F1.txt",O_RDONLY);
    printf("File is opened succesfully\n");
    if (fd==-1)
    {
        printf("ERROR NO %d",errno);
        perror("r1");
    }
    close(fd);
    printf("File is closed ");
}