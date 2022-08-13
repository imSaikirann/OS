#include<stdio.h>
#include<fcntl.h>
#include<dirent.h>
#include<unistd.h>
#include<string.h>
int main()
{
    DIR *d; 
    
    struct dirent *dir; 
    d=opendir(".");
    if(d)
    {
        while((dir=readdir(d))!=NULL)
        {
            printf("%s\n",dir -> d_name);
        }
        closedir(d);
    } 
    return 0;
}