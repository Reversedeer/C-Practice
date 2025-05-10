#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, s, area;
    printf("请输入三角形的三边长度 a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("三角形的面积为: %.2lf\n", area);
    }
    else
    {
        printf("输入的三边无法构成三角形。\n");
    }

    return 0;
}
