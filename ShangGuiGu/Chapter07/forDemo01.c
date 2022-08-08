#include<stdio.h>
#include<string.h>

int main(){

    char name[10] = " ";
    while (strcmp(name, "exit") != 0)
    {
        /* code */
        printf("\n请输入名字: ");
        scanf("%s", name);
        printf("\n你输入的名字是: %s", name);
    }
    

}