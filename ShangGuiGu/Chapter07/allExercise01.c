#include<stdio.h>

int main(){
    int num = 153;

    int num1 = num / 100;
    int num2 = num % 100 / 10;
    int num3 = num % 10;

    if (num == num1*num1*num1 + num2*num2*num2 + num3*num3*num3)
    {
        /* code */
        printf("%d 是水仙花数\n", num);
    }
    
}