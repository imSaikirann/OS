#include<stdio.h>
#include<unistd.h>
#include<string.h>

char*msg ="Grab the msg";
int main()
{
    char buff[1024];
    int fd[2];
    int pipe(fd);
    if(fork()!=0)
    {
        close(fd[0]);
        write(fd[1],msg,strlen(msg));
    }
    else{
        close(fd[1]);
        read(fd[0],buff,1024);
        printf("Got this msg from writer %s\n",buff);
    }
   
}