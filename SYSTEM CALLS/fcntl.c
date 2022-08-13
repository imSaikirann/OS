#include<stdio.h>
#include<fcntl.h>

void main()
{
    int fd=open("F2.txt",O_RDONLY |O_CREAT,0771);
    int fd2=fcntl(fd,F_DUPFD,0);
    while(1)
    {


    }
}