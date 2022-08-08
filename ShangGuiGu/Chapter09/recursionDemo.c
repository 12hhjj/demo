#include<stdio.h>

void test(int n);
int main()
{
    test(4);
}

void test(int n){
    if (n>2 )
    {
        test(n-1);
    }
    printf("%d\n",n);
}