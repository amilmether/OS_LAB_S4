#include<stdio.h>
#include<stdlib.h>

int burst[20],waiting[20],n,turnaround[20],remainingTime[20],arrival[20];
int t,time=0;

void input(){
    printf("\nEnter no of process:");
    scanf("%d",&n);
    printf("Enter time quantum:");
    scanf("%d",&t);
    for (int i=0;i<n;i++){
        printf("Brust time for process P%d:",i+1);
        scanf("%d",&burst[i]);
        remainingTime[i]=burst[i];
    }
    for (int i=0;i<n;i++){
        printf("Arrival time for process P%d:",i+1);
        scanf("%d",&arrival[i]);
    }
}

void calculateWaiting(){
    int rempro=n;
    while (rempro>0)
    {
        for(int i =0 ;i<n;i++){
            if(remainingTime[i]>0){
                if(remainingTime[i] <= t){
                    time+=remainingTime[i];
                    waiting[i]=time-burst[i]-arrival[i];
                    remainingTime[i]=0;
                    rempro--;
                }else if(remainingTime[i]>0){
                    remainingTime[i]-=t;
                    time+=t;
                }
            }
        }
    }
    
}

void calculateTurnaround(){
    for (int i = 0; i < n; i++)
    {
        turnaround[i]=waiting[i]+burst[i];
    }
}
float calcAverage(int a[20]){
    float sum=0;
    float avg=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+a[i];
    }
    avg=sum / n;
    return avg;
    
}
void display(){
    printf("\nRR\n\n");
    printf("Process  Burst Time Arrival Time  Waiting Time  Turnaround Time\n");
    for(int i=0;i<n;i++){
        printf("P%d        %d            %d            %d            %d\n",i+1, burst[i],arrival[i] ,waiting[i], turnaround[i]);
    }
    printf("\nAverage Waiting time is : %f", calcAverage(waiting));
    printf("\nAverage Turnaround time is : %f", calcAverage(turnaround));
}
void main(){
    input();
    calculateWaiting();
    calculateTurnaround();
    display();
}
