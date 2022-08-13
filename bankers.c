#include<stdio.h>

int main()
{
    int p,r,flag[10],available[10],alloc[10][10],max[10][10],need[10][10],instance, count1=0,count2=0,i,j,k=0;

    printf("Enter the number of process: ");  
    scanf("%d",&p);

    printf("Enter the number of resources: "); //Number of resources
    scanf("%d",&r);
    printf("Enter the number of instances avaliable for each resouce: \n"); 
    for(i=0;i<p;i++)
    {
        flag[i]=0;
    }
    for(i=0;i<r;i++)
    {
        scanf("%d",&instance);
        available[i]=instance;
    }
    printf("Enter number of maximum instance of each process: \n");
    for(i=0;i<p;i++)
    {
        printf("for p[%d] ",i);
        for(j=0;j<r;j++)
        {
            scanf("%d",&instance);
            max[i][j]=instance;
        }
    }
    printf("Enter the number of instances currently allocated to each process: \n");
    for(i=0;i<p;i++)
    {
        printf("for p[%d]",i);
        for(j=0;j<r;j++)
        {
            scanf("%d",&instance);
            alloc[i][j]=instance;
            need[i][j]=max[i][j]-alloc[i][j];
        }
    }

    printf("safe sequence is : \n");
    while(count1!=p)
    {
        count2 = count1;
        for(i=0;i<p;i++)
        {
            for(j=0;j<r;j++)
            {
                if(need[i][j]<=available[j])
                {
                    k++;
                }
            }
            if(k==r && flag[i]==0)
            {
                printf("p[%d]",i);
                flag[i]=1;
                for(j=0;j<r;j++)
                {
                    available[j]=available[j]+alloc[i][j];
                }
                count1++;
            }
            k=0;
        }
        if(count1==count2)
        {
            printf("\nSTOP");
            break;
        }
    }

}