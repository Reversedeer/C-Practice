#include <stdio.h>
// 输入10个学生的成绩，计算全部成绩的平均分，打印出不及格的成绩
int main()
{
    int scores[10];
    int sum = 0, count = 0;
    float average;

    for (int i = 0; i < 10; i++)
    {
        printf("请输入第%d个学生的成绩: ", i + 1);
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    average = sum / 10.0;
    printf("平均分: %.2f\n", average);

    printf("不及格的成绩:\n");
    for (int i = 0; i < 10; i++)
    {
        if (scores[i] < 60)
        {
            printf("%d ", scores[i]);
        }
    }
}