#include<stdio.h>

int main(){

    int num = 100;
    int *p1 = &num;
    int *p2 = p1;
    *p2 = 55;

    printf("num = %d, *p1 = %d, *p2 = %d\n", num, *p1, *p2);

}