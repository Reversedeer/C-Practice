#include <stdio.h>
int max(int a, int b)
{
    return (a > b) ? a : b;
}

int maxOfFour(int a, int b, int c, int d)
{
    return max(max(a, b), max(c, d));
}

int main()
{
    int num1, num2, num3, num4;
    printf("请输入四个整数：\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    int result = maxOfFour(num1, num2, num3, num4);
    printf("最大值是：%d\n", result);

    return 0;
}