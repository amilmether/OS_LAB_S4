// dev_t
// ino—t
// st_dev;
// st—ino;
// mode_t
// st—mode;
// nlink—t st—nlink;
// uid—t
// gid—t
// dev_t
// off—t
// st—uid;
// st—gid;
// st—rdev;
// st—size;
// / * ID of device containing file */
// / * Inode number */
// / * File type and mode */
// / * Number of hard links */
// / * User ID of owner */
// / * Group ID of owner */
// / * Device ID (if special file) */
// / * Total size, in bytes * /

#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
void main(){
    struct stat buf;
    stat("./fork2.c",&buf);//./ is current dir and the file
    printf("File size in bytes:%ld",buf.st_size);
}