#include <stdio.h>

int main()
{
    int score;
    printf("请输入学生的成绩: ");
    scanf("%d", &score);

    switch (score / 10)
    {
    case 10:
    case 9:
        printf("等级: 优秀\n");
        break;
    case 8:
    case 7:
        printf("等级: 良好\n");
        break;
    case 6:
        printf("等级: 合格\n");
        break;
    default:
        printf("等级: 不及格\n");
        break;
    }

    return 0;
}