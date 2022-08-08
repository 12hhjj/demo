#include <stdio.h>

int main()
{
    int count = 0;
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 9 == 0)
        {
            /* code */
            printf("%d \n", i);
            count++;
            sum += i;
        }
        
    }

    printf("一共有 %d 个9的倍数, 和 = %d \n", count, sum);
}