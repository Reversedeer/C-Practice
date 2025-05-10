#include <stdio.h>

int main()
{
    int x, y;
    y = 2025;
    printf("请输入你的年龄：");
    scanf("%d", &x);
    int jianfa = y - x;
    printf("你今年%d岁啦！\n", jianfa);
}