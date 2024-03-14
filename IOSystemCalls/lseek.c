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
    lseek(fd,1,SEEK_SET);//it is actually selecting the char on the file file.txt that is 1 is the number if we call SEEK_SET and one seek_set is the first char and seek_set 1 is the second char
    read(fd,rbuf,1);
    printf("%s\n",rbuf);
    close(fd);
    return 0;
}
