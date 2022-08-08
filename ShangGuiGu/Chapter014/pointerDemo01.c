#include<stdio.h>

const int MAX = 3;

int main(){
    
    int num[] = {10,20,100};

    int i, *ptr;

    ptr = num;

    for (int i = 0; i < MAX; i++)
    {
        /* code */
        printf("num[ %d ]的地址 = %p \n", i, ptr);
        printf("存储值： num[ %d ] = %d \n",i,*ptr);
        ptr++;
    }
    

}