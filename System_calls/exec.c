// exec() system call helps to run an executable file
// The first parameter of each function denotes the pathname of the file to be executed
// A variable number of additional parameters. Each points to a string describing a command-line
// argument for the new program
#include<stdio.h>
#include<unistd.h>
void main(){
    execl("/usr/bin/ls","ls","-l",NULL);
}
