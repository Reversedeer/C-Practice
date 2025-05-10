#include <stdio.h>

int main()
{
    char ch;

    printf("请输入一个字符: ");
    scanf("%c", &ch);

    printf("%c的ASCII码值是: %d\n", ch, (int)ch);

    return 0;
}