#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main(){
    int fd;
    char wbuf[128]="Hello";
    char rbuf[128];
    fd=open("file.txt",O_RDWR);//edit the file.txt and add Hello to it
    read(fd,rbuf,100);//to read 100 bytes of content or it will read how much data if the file do not exist 100 bytes of data
    printf("%s\n",rbuf);
    close(fd);
    return 0;
}
