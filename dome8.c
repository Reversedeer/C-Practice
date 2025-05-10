#include <stdio.h>
// 输入一个整数，输出这个整数的绝对值。
int main()
{
    int x;
    printf("请输入一个整数：");
    scanf("%d", &x);
    if (x < 0)
    {
        x = -x;
    }
    printf("这个整数的绝对值是：%d\n", x);
    return 0;
}