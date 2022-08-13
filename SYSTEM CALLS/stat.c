#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<fcntl.h>
#include<string.h>
#include<sys/stat.h>
#include<stdlib.h>

int main(int argc,char**argv)
{
    if(argc!=2)
    {
        return 1;
    }
    struct stat a;
    if((stat(argv[1],&a))<0);  
    printf("Information for %s\n",argv[1]); //file name
    printf("File size   : %ld\n",a.st_size);
    printf("File inode  : %ld\n",a.st_ino);
    printf("File permissiosn: ");

    printf((S_ISDIR(fstat,st_mode))?"d":"_");
    printf((fstat,st_mode ,&S_IRUSR)?"r":"_");
    printf((fstat,st_mode,&S_IRUSR)?"w":"_");
    printf((fstat,st_mode,&S_IRUSR)?"X":"_");

    printf((fstat,st_mode,&S_IRGRP)?"r":"_");
    printf((fstat,st_mode,&S_IRGRP)?"w":"_");
    printf((fstat,st_mode,&S_IRGRP)?"x":"_");

    printf((fstat,st_mode,&S_IROTH)?"r":"_");
    printf((fstat,st_mode,&S_IROTH)?"w":"_");
    printf((fstat,st_mode,&S_IROTH)?"x":"_");
    return 0;



}