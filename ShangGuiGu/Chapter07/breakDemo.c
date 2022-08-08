#include<stdio.h>
#include<stdlib.h>

int main(){


    int positive = 0;
    int negative = 0;
    int num = 0;
    
    while (1)//死循环
    {
        printf("请输入一个数：");
        scanf("%d",&num);
        if (num == 0 )
        {
            break;
        }

        if (num > 0)
        {
            positive++;
            
        }

        if (num < 0)
        {
            negative++;
        }
        

        
    }
    printf("正数个数 = %d, 负数个数 = %d", positive, negative);
}