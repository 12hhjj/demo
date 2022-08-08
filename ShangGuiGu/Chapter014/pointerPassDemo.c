#include<stdio.h>

void test(int *p);

int main()
{
    int num = 90;

    int *p = &num;

    test(&num); //传地址
    printf("main中的num = %d \n",num);

    test(p); //传指针
    printf("main中的num = %d \n", num);
}

void test(int *p){

    *p += 1;
}