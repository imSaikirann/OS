#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<errno.h>
#include<stdlib.h>

int err;
void main()
{
    int s;
    int fd = open("F1.txt",O_WRONLY | O_CREAT,0771);
    if(fd ==-1)
    {
        printf("ERROR",err);
    }
    else
    {
        printf("%d\n",fd);
        s=write(fd,"WARishell",strlen("Warishell"));
        printf("size =%d\n",s);
        printf("SUccesfully written into the File\n");
        close(fd);

    }

}