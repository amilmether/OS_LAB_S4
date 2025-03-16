#include<stdio.h>
#include<stdlib.h>
struct Fcfs
{
    int btime;
    int pid;
    int wtime;
    int ttime;
}P[10];
int main(){
    int i,j,n;
    int tottime=0,totwtime=0;
    printf("FCFS SCHEDULING...\n");
    printf("Enter Number of process");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        P[i].pid=i;
        printf("Enter the Burst time for %d",i+1);
        scanf("%d",&P[i].btime);
    }
    P[0].wtime=0;
    P[0].ttime=P[0].btime;
    for(i=0;i<n;i++){
        P[i].wtime = P[i - 1].wtime + P[i - 1].btime;
        P[i].ttime=P[i].wtime+P[i].btime;
        tottime+=P[i].ttime;
        totwtime+=P[i].wtime;
        //printf("wating%d",P[i].wtime);
    }
    printf("\n Total Waiting time is:%d",totwtime);
    printf("\n Total Turnaround time is :%d",tottime);
    printf("\n Average Waiting time:%d",totwtime/n);
    printf("\n Average TurnAround time:%d",tottime/n);
}
