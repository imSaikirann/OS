#include<stdio.h>
void main()
{
    int p[10],n,wt[10],bt[10],tat[10],pri[10],temp,count,tq,st[10],sq=0,i;
    float avgwt=0,avgtat=0;

    printf("Enter the number of process : ");
    scanf("%d",&n);
    printf("Enter the time quntam: ");
    scanf("%d",&tq);

    for(i=0;i<n;i++)
    {
        printf("Enter the name : ");
        scanf("%d",&p[i]);
        printf("Enter the bT: ");
        scanf("%d",&bt[i]);
        st[i] = bt[i];
    }
    while(1)
    {
        for(i=0,count=0;i<n;i++)
        {
            temp=tq;
            if(st[i]==0)
            {
                count++;
                continue;
            }
            if(st[i]>tq)
            {
                st[i]=st[i]-tq;
            }
            else 
            {
                if(st[i]>=0)
                {
                    temp = st[i];
                    st[i]=0;
                }
            }
            sq=sq+temp;
            tat[i]=sq;
            avgtat = avgtat+tat[i];
            
            
        }
        if(count==n)
        {
            break;
        }
    }

    for(i=0;i<n;i++)
    {
        wt[i]=tat[i]-bt[i];
        avgwt = avgwt+wt[i];
    }
    printf("process\tbt\twt\ttat\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%d\t%d\t%d\n",p[i],bt[i],wt[i],tat[i]);
    }

    printf("AVG wt = %f\n ms AVg tat = %f\n ms",avgwt/n,avgtat/n);
}