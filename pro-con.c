#include<stdio.h>
#include<stdlib.h>

int wait(int);
int signal(int);
void pro();
void con();

int mutex =1,full=0,empty=4,x=0;

void main()
{
    int ch;
    printf("1.Producer\n2.consumer\n3.exit\n");
    while(1)
    {
        printf("Enter ur choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:if(mutex==1 && empty!=0)
        {
            pro();
        }
        else
        {
            printf("FULL\n");
        }
        break;
        case 2 : if(mutex==1 && full!=0)
        {
            con();
        }
        else{
            printf("EMPTY");
        }
        break;
        case 3:printf("EXIT\n");
        exit(0);
        break; 
        }
    }
}

int wait(int s)
{
    return --s;
}
int signal(int s)
{
    return ++s;
}

void pro()
{
    mutex = wait(mutex);
    full = signal(full);
    empty=wait(empty);
    x++;
    printf("Pro set : %d\n",x);
    mutex = signal(mutex);
}

void con()
{
    mutex = wait(mutex);
    full = wait(full);
    empty=signal(empty);
    x--;
    printf("Con get : %d\n",x);
    mutex = signal(mutex);
}