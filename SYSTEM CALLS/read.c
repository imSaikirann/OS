#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>
#include<fcntl.h>
#include<stdlib.h>

int err;
void main()
{
    int sz;
    char *c =(char*)calloc(100,sizeof(char));
    int fd=open("F1.txt",O_RDONLY);
    if(fd==-1)
    {
        printf("ERROR %d ",err);
    }
    else{
        printf("file is %d",fd);
        sz=read(fd,c,15);
        printf("%d size =%d\n",fd,sz);
        c[sz]='\0';
        printf("Data is %s",c);
    }
}