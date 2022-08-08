#include<stdio.h>

int main(){

    int var[] = {10, 20, 100};

    int *ptr[3];

    for (int i = 0; i < 3; i++)
    {
        /* code */
        ptr[i] = &var[i];
    }

    for (int i = 0; i < 3; i++)
    {
        /* code */
        printf("Value of var[%d] = %d  ptr[%d] 地址 = %p\n",i,*ptr[i],i,&ptr[i]);
    }
}