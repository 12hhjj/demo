#include<stdio.h>

int main(){

    //自动类型转换 小——>大
    char c1 = 'a';
    int num1 = c1;
    double d1 = num1;

    printf("%.2f\n", d1);

    float f1 = 1.1f;
    double d2 = 4.2323424234;
    f1 = d2;   //精度损失
    printf("%.8f\n",f1); 

    //强制类型转换,只对最近的数有效
    double d3 = 1.234;
    int num2 = (int)d3;
    printf("%d, %f\n",num2,d3);


}