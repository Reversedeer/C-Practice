#include <stdio.h>

int main()
{
    int ch;
    printf("请输入若干个字符，以回车结束：\n");
    while ((ch = getchar()) != '\n')
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            putchar(ch);
        }
    }
    printf("\n");
    return 0;
}