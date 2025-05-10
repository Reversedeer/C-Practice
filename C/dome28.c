#include <stdio.h>

int main()
{
    double x, y;
    printf("请输入x的值：");
    scanf("%lf", &x);
    if (x < 1)
    {
        y = x;
        printf("y的值为：%.f", y);
    }
    else if (x >= 1 && x < 10)
    {
        y = x * 2 - 1;
        printf("y的值为：%.f", y);
    }
    else if (x >= 10)
    {
        y = x * 3 - 11;
        printf("y的值为：%.f", y);
    }
    else
    {
        printf("输入有误");
    }
}