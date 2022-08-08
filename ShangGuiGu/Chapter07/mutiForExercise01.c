#include<stdio.h>

int main(){

    int stuNum = 5;
    int classNum = 3;
    double classTotalScore = 0.0;
    double score = 0.0;
    double allClassTotalScore = 0.0;
    int count = 0;

    for (int i = 1; i <= classNum; i++)
    {
        /* code */
        classTotalScore = 0.0;
        for (int j = 1; j <= stuNum; j++)
        {
            /* code */
            printf("请输入第 %d 个班级的第 %d 个学生的成绩：", i, j);
            scanf("%lf", &score);
            classTotalScore += score;

            if (score >= 60)
            {
                count++;
            }
            
        }
        allClassTotalScore += classTotalScore;

        printf("第 %d 个班级的平均分 = %.2f \n", i, classTotalScore / stuNum);
    }
    printf("所有班级的平均分 = %.2f \n", allClassTotalScore / (stuNum * classNum));
    printf("及格人数 = %d\n", count);
    
}