#include<stdio.h>
#include<unistd.h>
void main(){
    pid_t pid;
    pid=fork();
    printf("Hello World\n");
}