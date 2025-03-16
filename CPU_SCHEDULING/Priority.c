#include<stdio.h>
#include<stdlib.h>
struct Priority
{
    int pid;
    int btime;
    int prio;
    int ttime;
    int wtime;
    int ctime;
}P[10],temp;
int main(){
    int i,j,n;
    float totalwt=0.0,totaltat=0.0;
    printf("Enter number of process");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        // printf("Enter the Process id: P");
        // scanf("%d",&P[i].pid);
        printf("Enter the Brust for P%d:",i+1);
        scanf("%d",&P[i].btime);
        printf("Enter the Priority for P%d:",i+1);
        scanf("%d",&P[i].prio);
    }
    for(i=0;i<n; i++)
    {
        for (j=i+1;j<n; j++)
        {
            if (P[i].prio>P[j].prio)
            {
                temp=P[i];
                P[i]=P[j];
                P[j]=temp;
            }    
        }
    }
    P[0].ctime=P[0].btime;
    P[0].wtime=0;
    for ( i = 1; i < n; i++)
    {
        P[i].ctime=P[i].btime+P[i-1].ctime;
    }
    for(i=0;i<n;i++){
        P[i].ttime=P[i].ctime;
        P[i].wtime=P[i].ttime-P[i].btime;
        totaltat+=P[i].ttime;
        totalwt+=P[i].wtime;
    }
    printf("TOTAL WAITING TIME:%f\n",totalwt);
    printf("AVERAGE WAITING TIME:%f\n",totalwt/n);
    printf("TOTAL TURNAROUND TIME:%f\n",totaltat);
    printf("AVERAGE TURNAROUND TIME:%f\n",totaltat/n);
    
    
}
