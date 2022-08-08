#include<stdio.h>

int max(int a, int b);

int main(){

    int x, y, maxVal;

    //函数指针
    int (*pMax)(int, int) = max;

    printf("Please input two numbers: ");

    scanf("%d %d",&x, &y);

    maxVal = (*pMax)(x,y);

    printf("The Max Value = %d\n", maxVal);

}

int max(int a,int b){
    return a>b ? a : b;
}