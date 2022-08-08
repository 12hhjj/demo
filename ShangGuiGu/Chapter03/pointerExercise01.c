#include<stdio.h>

int main(){

    int num = 88;
    int *ptr = &num;
    printf("num的值 = %d, num的地址 = %p\n", num, &num);
    
    *ptr = 99; //通过*ptr修改num的值
    printf("num的值 = %d, num的地址 = %p\n",num, &num );
    
}