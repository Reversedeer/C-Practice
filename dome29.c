#include <stdio.h>

int main()
{
    int num;
    printf("请输入一个不多于五位数的正整数: ");
    scanf("%d", &num);

    if (num <= 0 || num >= 10000)
    {
        printf("输入的数字不符合要求。\n");
    }
    else if (num < 10)
    {
        printf("这是1位数。\n");
    }
    else if (num < 100)
    {
        printf("这是2位数。\n");
    }
    else if (num < 1000)
    {
        printf("这是3位数。\n");
    }
    else if (num < 10000)
    {
        printf("这是4位数。\n");
    }
    return 0;
}