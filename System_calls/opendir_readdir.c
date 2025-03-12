// The opendir() function opens a directory and returns a pointer to the directory stream
// The stream is positioned at the first entry in the directory
// The readdir() function gives next directory entry in the directory stream
// on reaching the end of the directory stream
// It returns
// NULL

#include<stdio.h>
#include<unistd.h>
#include<dirent.h>
void main(){
    DIR *d;
    struct dirent *de;
    d=opendir(".");
    while(de=readdir(d)){
        printf("%s\n",de->d_name);
    }
    
}