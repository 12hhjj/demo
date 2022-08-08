#include<stdio.h>

//讲解指针入门

int main(){

    int num = 1;

    printf("num的值 = %d, 地址 = %p \n", num, &num);

    //int* 表示类型为指针类型，名称ptr
    int *ptr = &num;

    //指针变量本身也有地址 
    printf("ptr的地址 = %p \n  ptr存放的值 = %p \n  ptr指向的值 = %d\n", &ptr, ptr, *ptr);


}