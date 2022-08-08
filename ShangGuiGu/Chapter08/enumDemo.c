#include<stdio.h>

enum DAY{
    MON = 1, TUE, WED, THU, FRI, SAT, SUN //如果没有赋值，就会按照顺序赋值
}day;

int main(){

    for (day = MON; day < SUN; day++)
    {
        /* code */
        printf("枚举元素：%d \n", day);
    }
    


}