#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<fcntl.h>

void main()
{
    int fd;
    fd = open("F1.txt",O_RDONLY | O_CREAT,0771);
    printf("File is %d ",fd);
    if(fd==-1)
    {
        printf("ERROR NO %d ",errno);
        perror("r1");
    }
}