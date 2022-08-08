#include<stdio.h>

int fbn(int n);
int main()
{

    int result = fbn(10);
    printf("%d\n",result);

}

int fbn(int n){
    if (n == 1 || n == 2)
    {
        return 1;
    }else{
        return fbn(n-1) + fbn(n-2);
    }
    
}