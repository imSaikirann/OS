#include<stdio.h>
void main()
{
    int p[10],bt[10],wt[10],tat[10],n;
    float avgwt,avgtat;
    printf("Enter the number of process: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Enter the process name : ");
        scanf("%d",&p[i]);
        printf("Enter the Burst time of the process: ");
        scanf("%d",&bt[i]);
    }

    wt[0]=0;
    tat[0]=bt[0];
    
    for(int i=1;i<n;i++)
    {
        wt[i]=wt[i-1]+bt[i-1];
        tat[i]=wt[i]+bt[i];

        avgwt = avgwt+wt[i];
    }
     for(int i=0;i<n;i++)
    {
        avgtat=avgtat+tat[i];
    }


    printf("Process\tBT\tWT\tTAT\n");
    for(int i =0;i<n;i++)
    {
        printf("%d\t%d\t%d\t%d\n",p[i],bt[i],wt[i],tat[i]);
    }

    printf("Average Waiting Time =%f ms\n",avgwt/n);
    printf("Average TurnaroundTime = %f ms\n",avgtat/n);

}