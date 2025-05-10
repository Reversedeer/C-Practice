#include <stdio.h>

int main()
{
    int a, b, min;

    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);

    min = (a < b) ? a : b;

    printf("较小的值是：%d\n", min);

    return 0;
}