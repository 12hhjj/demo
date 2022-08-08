#include<stdio.h>
#include<time.h>

int main(){

    time_t curtime; // time_t是time.h中的结构体
    time(&curtime); //完成初始化任务
    printf("%s\n",ctime(&curtime));

}