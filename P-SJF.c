#include<stdio.h>
void main()
{
    int p[10],pt[10],bt[10],wt[10],tat[10],n;
    float avgwt,avgtat;

    printf("Enter the number of process: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Enter the name : ");
        scanf("%d",&p[i]);
        printf("Enter the priority: ");
        scanf("%d",&pt[i]);
        printf("Enter the burst time : ");
        scanf("%d",&bt[i]);
    }

    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(bt[i]<bt[j])
            {
            temp = bt[i];
            bt[i] = bt[j];      //swapping the bursttimes,process and priority of process.
            bt[j] = temp;

            temp = p[i];     
            p[i] = p[j];
            p[j] = temp;      

            temp = pt[i];
            pt[i] = pt[j];
            pt[j] = temp;
            }
        }
    }

    wt[0]=0;
    tat[0]=bt[0];

    for(int i=1;i<n;i++)
    {
        wt[i]=wt[i-1]+bt[i-1];
        tat[i]=bt[i]+wt[i];

        avgwt = avgtat+wt[i];  
    }

    for(int i=1;i<n;i++)
    {
        avgtat=avgtat+tat[i];
    }

    printf("p\tpt\tBT\tWT\tTAT\n");
    for(int i=0;i<n;i++)
    {
    printf("%d\t%d\t%d\t%d\t%d\n",p[i],pt[i],bt[i],wt[i],tat[i]);
    }

    printf("Average Waiting Time =%f ms\n",avgwt/n);
    printf("Average TurnaroundTime = %f ms\n",avgtat/n);

    
}