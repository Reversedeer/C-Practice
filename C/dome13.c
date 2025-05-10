#include <math.h>
#include <stdio.h>

int main()
{
    double radius, circumference, area, volume;
    const double PI = 3.14;

    printf("请输入圆的半径: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("圆的周长: %.2lf\n", circumference);
    printf("圆的面积: %.2lf\n", area);
    printf("圆球的体积: %.2lf\n", volume);

    return 0;
}
