#include <stdio.h>

int main()
{
    char a;
    printf("请输入一个小写字母: ");
    scanf("%c", &a);

    char b = a - 1;
    char c = a + 1;
    printf("当前字符: %c, 大写: %c\n", a, a - 32);
    printf("前导字符: %c, 大写: %c\n", b, b - 32);
    printf("后续字符: %c, 大写: %c\n", c, c - 32);
    return 0;
}