// wait() system call blocks the calling process until one of its child processes exits
// or a signal is received
// A zombie process or defunct process is a process that has completed execution
// but still has an entry in the process table
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
void main(){
    pid_t pid;
    pid=fork();
    int status;
    if(pid==0){
        
        printf("I am Child Process\n");
        sleep(10);
        exit(10);//then the value of exit status become 10
    }else{
        printf(" Parent\n");
        wait(&status);
        printf("Exit Status is %d\n",WEXITSTATUS(status));
    }
}