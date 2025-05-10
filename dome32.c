#include <stdio.h>

int main()
{
    int num, w, q, b, s, g;
    printf("请输入一个不多于五位的正整数: ");
    scanf("%d", &num);

    if (num <= 0 || num >= 100000)
    {
        printf("输入的数字不符合要求。\n");
    }
    else if (num < 10)
    {
        printf("这是1位数。\n");
        printf("每位数字是：%d\n", num);
        printf("反转后的数字是：%d\n", num);
    }
    else if (num < 100)
    {
        printf("这是2位数。\n");
        g = num % 10;
        s = num / 10;
        printf("每位数字是：%d %d\n", s, g);
        printf("反转后的数字是：%d%d\n", g, s);
    }
    else if (num < 1000)
    {
        printf("这是3位数。\n");
        g = num % 10;
        s = (num / 10) % 10;
        b = num / 100;
        printf("每位数字是：%d %d %d\n", b, s, g);
        printf("反转后的数字是：%d%d%d\n", g, s, b);
    }
    else if (num < 10000)
    {
        printf("这是4位数。\n");
        g = num % 10;
        s = (num / 10) % 10;
        b = (num / 100) % 10;
        q = num / 1000;
        printf("每位数字是：%d %d %d %d\n", q, b, s, g);
        printf("反转后的数字是：%d%d%d%d\n", g, s, b, q);
    }
    else if (num < 100000)
    {
        printf("这是5位数。\n");
        g = num % 10;
        s = (num / 10) % 10;
        b = (num / 100) % 10;
        q = (num / 1000) % 10;
        w = num / 10000;
        printf("每位数字是：%d %d %d %d %d\n", w, q, b, s, g);
        printf("反转后的数字是：%d%d%d%d%d\n", g, s, b, q, w);
    }
    return 0;
}