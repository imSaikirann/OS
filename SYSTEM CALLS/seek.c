#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<fcntl.h>


void main()
{
    int fd;
    if((fd=open("F1.txt",O_RDONLY))==-1);
    char buf[20];
    if((read(fd,buf,20))!=20);
    printf("%s\n",buf);
    if((lseek(fd,5,SEEK_SET))<0);
    if((read(fd,buf,20))!=20);
    printf("%s\n",buf);

}