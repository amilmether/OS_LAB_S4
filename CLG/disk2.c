#include<stdio.h>
#include<stdlib.h>

int request[100],head;
int n,disksize;
int direction;
 void cscan(){
  int sorted[n],visited[n];
  int st=0;
  for(int i=0;i<n;i++){
 visited[i]=0;
 sorted[i]=request[i];
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
            }
            }
            if(head!=disksize){
             printf("->%d->0",disksize);
             st=st+abs(head-disksize)+disksize;
             head=0;
             }else{
              printf("->0");
             st=st+disksize;
             head=0;}
             for(int i=0;i<n;i++){
              if(!visited[i]&&sorted[i]>head){
                          printf("->%d",sorted[i]);
                          st=st+abs(sorted[i]-head);
                          head=sorted[i];
                          }}
                          printf("total seektime %d",st);
             }
             else{
              for(int i=n-1;i>=0;i--){
               if(!visited[i]&&sorted[i]<=head){
                    printf("->%d",sorted[i]);
                    st=st+abs(sorted[i]-head);
                    visited[i]=1;
                    head=sorted[i];
                    }}
                    if(head!=0){
                     printf("->0->%d",disksize);
                     st=st+abs(head-0)+disksize;
                     head=disksize;
                     }
                     else{
                      printf("->%d",disksize);
                      st=st+disksize;
                      head=disksize;}
                      for(int i=n-1;i>=0;i--){
                       if(!visited[i]&&sorted[i]<head){
                       printf("->%d",sorted[i]);
                        visited[i]=1;
                        st=st+abs(sorted[i]-head);
                        head=sorted[i];
                        }
                        }
                        printf("total seek time %d",st);
                        
                        }}
                        int main(){
                        int dk;
                         printf("enetr the no of process");
                         scanf("%d",&n);
                         printf("enter the process");
                         
                          for(int i=0;i<n;i++){
                           scanf("%d",&request[i]);
                            }
                            printf("enter the disksize");
                            scanf("%d",&dk);
                            disksize=dk-1;
                            printf("enetr the head");
                            scanf("%d",&head);
                            printf("enter the direction");
                            scanf("%d",&direction);
                            cscan();
                            }
                        
                        
                                     
                          
