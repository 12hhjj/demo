#include<stdio.h>

int main(){

    int days = 97;

    int week = days / 7;

    int leftDays = days % 7;

    printf("还有 %d 个星期 %d 天放假\n", week, leftDays);

}