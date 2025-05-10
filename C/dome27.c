#include <stdio.h>
#include <math.h>

int main()
{
    double number;

    while (1)
    {
        printf("请输入一个小于1000的正数: ");
        scanf("%lf", &number);

        if (number > 0 && number < 1000)
        {
            printf("平方根是: %.f\n", sqrt(number));
            break;
        }
        else
        {
            printf("输入无效，请重新输入！\n");
        }
    }

    return 0;
}