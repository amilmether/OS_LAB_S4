#include<stdio.h>
#include<stdlib.h>
int request[100],head,h;

int n,disksize;
int direction;
 void look(){
 int h=head;
 int st=0;
 int sorted[n],visited[n];
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
             }}
             }
    if(direction==1){
     for(int i=0;i<n;i++){
      if(!visited[i]&&sorted[i]>=head){
                printf("->%d",sorted[i]);
                st=st+abs(sorted[i]-head);
                head=sorted[i];
                visited[i]=1;
                }}
       for(int i=n-1;i>=0;i--){
        if(!visited[i]&&sorted[i]<head){
                           printf("->%d",sorted[i]);
                           st=st+abs(sorted[i]-head);
                           head=sorted[i];
                           visited[i]=1;
                           }
                           }
                           printf("total seektime %d\n",st);
             }else{
                 for(int i=n-1;i>=0;i--){
                       if(!visited[i]&&sorted[i]<=head){
                                 printf("->%d",sorted[i]);
                                 st=st+abs(sorted[i]-head);
                                 head=sorted[i];
                                 visited[i]=1;
                                 }
                          }
                   for(int i=0;i<n;i++){
                    if(!visited[i]&&sorted[i]>head){
                               printf("->%d",sorted[i]);
                               st=st+abs(sorted[i]-head);
                               head=sorted[i];
                               visited[i]=1;
                               }
                               }
                         }
                          printf("total seektime %d\n",st);
                         }
     void clook(){
               
                 
 int st=0;
 int sorted[n],visited[n];
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
             }}
             }
             
    if(direction==1){
     for(int i=0;i<n;i++){
      if(!visited[i]&&sorted[i]>=h){
                        printf("->%d",sorted[i]);
                        visited[i]=1;
                        st=st+abs(sorted[i]-h);
                        h=sorted[i];
                        }
                        }
            printf("->%d",sorted[0]);
           st=st+abs(h-sorted[0]);
           h=sorted[0];
           for(int i=1;i<n;i++){
            if(!visited[i]&&sorted[i]>h){
             printf("->%d",sorted[i]);
             visited[i]=1;
             st=st+abs(sorted[i]-h);
             h=sorted[i];
             }}
             printf("total seek time%d",st);
             }
             else{
                 for(int i=n-1;i>=0;i--){
                  if(!visited[i]&&sorted[i]<=h){
                       printf("->%d",sorted[i]);
                       visited[i]=1;
                       st=st+abs(sorted[i]-h);
                       h=sorted[i];}
                       }
                       printf("->%d",sorted[n-1]);
                       st=st+abs(h-sorted[n-1]);
                       h=sorted[n-1];
                       for(int i=n-1;i>=0;i--){
                        if(!visited[i]&&sorted[i]<h){
                           printf("->%d",sorted[i]);
                       visited[i]=1;
                       st=st+abs(sorted[i]-h);
                       h=sorted[i];}}
             }
             printf("total seektime %d",st);
                 }
    int main(){
    int dk;
     printf("enetr the no of process");
     scanf("%d",&n);
     printf("enter the process");
     for(int i=0;i<n;i++){
      scanf("%d",&request[i]);}
       printf("enter the disksize");
       scanf("%d",&dk);
       disksize=dk-1;
       printf("enter the head");
       scanf("%d",&head);
       h=head;
       printf("enetr the direction");
       scanf("%d",&direction);
       look();
       clook();
       }
                
            
   
