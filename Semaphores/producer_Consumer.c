#include<stdio.h>
#include<stdlib.h>

int mutex = 1,full =0 , empty=3;

int signal(int s){
    s++;
    return s;
}

int wait(int s){
    s--;
    return s;
}

void Producer(){
    mutex = wait(mutex);
    full = signal(full);
    empty = wait(empty);
    printf("Buffer contains %d items\n",full);
    mutex=signal(mutex);
}

void consumer(){
    mutex = wait(mutex);
    full = wait(full);
    empty=signal(empty);
    printf("Buffer contains %d items\n",full);
    mutex=signal(mutex);
}

void main(){
    int n;
    while (1)
    {
        printf("CHOOSE 1.Producer 2.Consumer 3.Exit \n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            if(mutex == 1 && empty != 0) {
                Producer();
            } else {
                printf("BUFFER IS FULL\n");
            }
            break;
        case 2:
            if(mutex == 1 && full != 0) {
                consumer();
            } else {
                printf("BUFFER IS EMPTY\n");
            }
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("wrong input");
            break;
        }
    }
    
}