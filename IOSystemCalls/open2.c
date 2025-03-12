#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main(){
    printf("Open");
    int fd;
    char wbuf[128]="Hello";
    fd=open("file.txt",O_RDWR);//edit the file.txt and add Hello to it
    write(fd,wbuf,strlen(wbuf));
    close(fd);
    return 0;
}
