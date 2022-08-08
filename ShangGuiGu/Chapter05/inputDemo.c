#include<stdio.h>

int main(){

    char name[10] = " ";
    int age = 0;
    double sal = 0;
    char gender = 'm';

    printf("请输入用户姓名：");
    scanf("%s",name);

    printf("请输入用户年龄：");
    scanf("%d", &age);

    printf("请输入用户薪水：");
    scanf("%lf", &sal); //接受double类型时，格式参数用%lf

    printf("请输入用户性别(m/f):");
    scanf("%c", &gender);//接受上面的回车字符
    scanf("%c", &gender);

    printf("\n name: %s, age = %d, sal = %.2f, gender = %c \n", name, age, sal, gender);

}