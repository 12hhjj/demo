#include<stdio.h>

//define只是一个简单的替换

#define A 1
#define B A+3
#define C A/B*3 
//A/A+3*3 = 1/1+3*3= 1 + 9 = 10

int main(){

    printf("%d\n",C);

}