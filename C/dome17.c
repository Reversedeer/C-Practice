#include <stdio.h>
// 编写一个程序，输入半径，输出其圆周长、圆面积、及圆球体积。要求每个结果占一行，小数点后保留2位，右对齐，宽度为10
#include <math.h>

int main()
{
    double r;
    double PI = 3.14;

    printf("请输入半径: ");
    scanf("%lf", &r);

    double c = 2 * PI * r;
    double s = PI * r * r;
    double v = (4.0 / 3.0) * PI * pow(r, 3);

    printf("%10.2f\n", c);
    printf("%10.2f\n", s);
    printf("%10.2f\n", v);

    return 0;
}