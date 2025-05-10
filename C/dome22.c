#include <stdio.h>

int main()
{
    int a;
    printf("请输入密码：");
    scanf("%d", &a);
    if (a != 1234)
    {
        printf("密码错误,请重新输入");
    }
    else
    {
        printf("密码正确");
    }
}