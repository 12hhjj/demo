#include<stdio.h>
#include<string.h>

int main(){

    char src[50],dest[50];
    char * str = "abcdef";
    printf("ste.len = %lu\n",strlen(str)); //字符串长度
    strcpy(src, "hello");  //拷贝字符串, 会将原来的字符串内容覆盖
    strcpy(dest,"尚硅谷");
    strcat(dest, src);  //拼接字符串
    printf("%s\n", dest);
}