#include<stdio.h>

int main(){

    //处理流程：10 / 4 = 2.5 ——>截取整数 ——> 2.000000
    double d1 = 10 / 4;
    double d2 = 10.0 / 4;

    printf(" d1 = %f\n", d1); // d1 = 2.000000

    printf(" d2 = %f\n", d2); // d2 = 2.500000

    //公式： a % b = a - a / b * b
    int res1 = 10 % 3;
    int res2 = -10 % 3; // -10 % 3 = -10 - (-10) / 3 * 3 = -10 - (-3) * 3 = -10 + 9 = -1

    printf(" res1 = %d\n", res1);

    printf(" res2 = %d\n", res2);

    int i = 10;

    int j = i++; // j = i , i = i + 1 ==》i = 11 , j = 10

    printf("i = %d , j = %d\n", i, j); // i = 11 , j = 10

    int k = ++i; // K = i = 1 , i = i + 1 ==》i = 12 , k = 12

    printf("i = %d , k = %d\n", i, k); // i = 12 , k = 12

}