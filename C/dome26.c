#include <stdio.h>

int main()
{
    int a, b, c;
    printf("请输入三个整数: ");
    scanf("%d%d%d", &a, &b, &c);

    int mini = a;
    if (b < mini)
    {
        mini = b;
    }
    if (c < mini)
    {
        mini = c;
    }

    printf("最小值是：%d\n", mini);
    return 0;
}