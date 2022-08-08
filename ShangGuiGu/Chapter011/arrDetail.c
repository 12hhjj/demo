#include<stdio.h>

void f1(int arr[]);
int main()
{

    int arr[3] = {1,2,3};

    printf("main函数中arr的地址 = %p\n",arr);
    // main函数中arr的地址 = 0x7ff7b74c0eec

    //数组默认是以地址传递的（传递指针）
    f1(arr);

    for (int i = 0; i < 3; i++)
    {
        /* code */
        printf("arr[ %d ] = %d\n",i, arr[i]);
    }
}

void f1(int arr[]){
    arr[0] = arr[0] + 1;
    printf("f1函数中arr的地址 = %p\n", arr);
    // f1函数中arr的地址 = 0x7ff7b74c0eec
}