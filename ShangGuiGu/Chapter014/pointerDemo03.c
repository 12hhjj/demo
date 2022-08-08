#include<stdio.h>

int main(){

    int var[] = {10,20,100};

    int *ptr =  var; //将var数组的首地址赋给ptr
    ptr += 2; //ptr存储的地址加2个int类型的字节

    printf("var[2] = %d var[2]的地址 = %p \n",var[2],&var[2]);
    printf("ptr = %p, ptr指向的地址内容 = %d \n",ptr, *ptr);
    
}