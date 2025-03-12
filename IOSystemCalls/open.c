#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main(){
    open("file.txt",O_CREAT,S_IRWXU);//create a file name file.txt

}
