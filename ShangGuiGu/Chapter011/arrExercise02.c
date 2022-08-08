#include<stdio.h>

int main(){

    int arr[5] = {1,2,3,4,5};

    int max = 0;

    for (int  i = 0; i < 5; i++)
    {
        /* code */
        if (arr[i] > max)
        {
            /* code */
            max = arr[i];
        }
        
    }

    printf(" max = %d\n", max);
    
}