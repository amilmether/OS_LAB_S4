#include<stdio.h>
#include<stdlib.h>
int request[100],head;
int n,disksize,direction;
  void fcfs(){
            int ts=0;   int head1=head;
            for(int i=0;i<n;i++)
                        {
                          printf("->%d",request[i]);
                          ts=ts+abs(request[i]-head1);
                          head1=request[i];
                         }
                            printf("totalseektime %d\n",ts);
                        }                                                   
    void sstf(){
    int head2=head;
    int ts=0;
    int visited[n];
     for(int i=0;i<n;i++){
      visited[i]=0;
      }
      for(int i=0;i<n;i++){
       int min=99999,pos=-1;
           for(int j=0;j<n;j++){
            if(!visited[j]&&abs(request[j]-head2)<min){
             min=abs(request[j]-head2);
             pos=j;
             }}
             printf("->%d",request[pos]);
             ts=ts+abs(request[pos]-head2);
             visited[pos]=1;
             head2=request[pos];
             }
printf("totalseektime %d\n",ts);

         }
         
    void scan()    {
    int head1=head;
    int st=0;
    int sorted[n];
    int visited[n];
    for(int i=0;i<n;i++){
     sorted[i]=request[i];
     visited[i]=0;
     }
     for(int i=0;i<n-1;i++){
      for(int j=0;j<n-i-1;j++){
       if(sorted[j]>sorted[j+1]){
                  int temp=sorted[j];
                  sorted[j]=sorted[j+1];
                  sorted[j+1]=temp;
                  }
                  }
                  }
        if(direction==1){
         for(int i=0;i<n;i++){
          if(!visited[i]&&sorted[i]>=head){
           printf("->%d",sorted[i]);
           st=st+abs(sorted[i]-head);
           head=sorted[i];
           visited[i]=1;
           }}
            if(head!=disksize){
                printf("%d",disksize);
                st=st+abs(disksize-head);
                head=disksize;
                }
            for(int i=n-1;i>=0;i--){
             if(!visited[i]&&sorted[i]<head){
                printf("->%d",sorted[i]);
                st=st+abs(sorted[i]-head);
                head=sorted[i];
                visited[i]=1;
                }
                }printf("totalseektime %d",st);
               }
               else{
                 for(int i=n-1;i>=0;i--){
                      if(!visited[i]&&sorted[i]<=head){
                       printf("->%d",sorted[i]);
                       st=st+abs(sorted[i]-head);
                       head=sorted[i];
                       visited[i]=1;
               }}
                if(head!=0){
                 printf("->0");
                 st=st+abs(head-0);
                 head=0;
                 }
                 for(int i=0;i<n;i++){
                     if(!visited[i]&&sorted[i]>head){
                      printf("->%d",sorted[i]);
                      st=st+abs(sorted[i]-head);
                      head=sorted[i];
                      visited[i]=1;
                      }}
                    printf("total seektime%d",st);
                    }}
                      
                      
                      
                                 
 int main(){
 int dk;
  printf("enter the no of process");
  scanf("%d",&n);
  
  printf("enetr the process");
  for(int i=0;i<n;i++){
  scanf("%d",&request[i]);
  }
  printf("enetr the disksize");
  scanf("%d",&dk);
  disksize=dk-1;
  printf("enetr the head ");
  scanf("%d",&head);
  printf("enetr the direction");
  scanf("%d",&direction);
  
  fcfs();
  sstf();
  scan();
  }
