#include<stdio.h>

int main(){
    
    int count = 5;
    for (int i = 1; i <= count; i++)
    {
        for (int k = 1; k <= count - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }

    for (int i = 1; i <= count; i++)
    {
        for (int k = 1; k <= count - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1 || i == count)
            {
                printf("*");
            }else{
                printf(" ");
            }
            
        
        }
        printf("\n");
    }
}