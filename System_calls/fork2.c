#include<stdio.h>
#include<unistd.h>
void main(){
    pid_t pid;
    pid=fork();
    int var=5;
    if(pid==0){
        var=var+1;
        printf("I am Child Process\n%d\n",var);
        printf("PID of child process is %d\n",getpid());
    }else{
        var=var+2;
        printf("I am Parent Process\n%d\n",var);
        printf("PID of child process is %d\n",getpid());
    }
}