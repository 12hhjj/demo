#include<stdio.h>

int main(){

    struct Cat
    {
        /* data */
        char *name; //指向一个字符串
        int age;
        char *color;
    };

    struct Cat cat1;
    cat1.name = "小白";
    cat1.age = 3;
    cat1.color = "白色";

    struct Cat cat2;
    cat1.name = "小花";
    cat1.age = 100;
    cat1.color = "花色";

    printf("第一只猫 name = %s, age = %d, color = %s", cat1.name, cat1.age, cat1.color);
    printf("第二只猫 name = %s, age = %d, color = %s", cat2.name, cat2.age, cat2.color);

}