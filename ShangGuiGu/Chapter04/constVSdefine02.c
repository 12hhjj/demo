#include<stdio.h>

// #define DEBUG

int main(){

#ifdef DEBUG //如果定义过DEBUG
    printf("OK");
#endif

#ifndef DEBUG //如果没有定义过DEBUG
    printf("NO");
#endif

}