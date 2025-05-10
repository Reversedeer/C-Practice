#include <stdio.h>

int main()
{
    float x, s = 0.0;
    int n;

    printf("请输入x的值: ");
    scanf("%f", &x);

    printf("请输入n的值: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2)
    {
        s += x / i;
    }

    printf("式子的值为: %.2f\n", s);

    return 0;
}