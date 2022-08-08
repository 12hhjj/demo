#include<stdio.h>

int main(){
    char str1[20];
    char str2[20];
    char str3[20];

    int a = 23234,b=23242;
    double c = 23.43535;

    // sprintf将结果存放到字符串中

    sprintf(str1, "%d %d\n",a,b);
    sprintf(str2, "%.2f\n", c);
    sprintf(str2, "%8.2f\n", c);

    printf("str1 = %s\nstr2 = %s\nstr3 = %s\n",str1,str2,str3);

}