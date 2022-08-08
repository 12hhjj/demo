#include<stdio.h>
#include<string.h>

void bubbleSort(int num[] , int len);

int main()
{

    int num[] = {3,9,-1,10,-2};

    int len = sizeof(num) / sizeof(int);

    bubbleSort(num, len);
    

    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf(" %d ", num[i]);
    }
}

void bubbleSort(int num[],int len){

    

    for (int i = 0; i < len-1; i++)
    {
        /* code */
        for (int j = 0; j < len-1-i; j++)
        {
            /* code */
            if (num[j] > num[j+1])
            {
                /* code */
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
            
        }
        
    }
    
}