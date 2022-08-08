#include<stdio.h>

void myCal(int num1, int num2, char oper){
    int result = 0;
    switch (oper)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;

    default:
        printf("运算错误\n");
    }

    printf(" %d %c %d = %.2d\n", num1, oper, num2, result);
}