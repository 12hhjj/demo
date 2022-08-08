#include<stdio.h>

int main(){

    char arr[26];

    for (int i = 0; i < 26; i++)
    {
        /* code */
        arr[i] = 'A' + i;
    }

    for (int i = 0; i < 26; i++)
    {
        /* code */
        printf("arr[ %d ] = %c \n", i, arr[i]);
    }
}