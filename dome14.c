#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;
    printf("请输入x的值: ");
    scanf("%d", &x);
    y = abs(x) + 2;
    printf("y的值为: %d\n", y);
    return 0;
}
