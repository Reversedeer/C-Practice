#include <stdio.h>
// 输入一个字母，若是小写字母则转化为大写字母，若为大写字母则转化为小写字母
int main()
{
    char ch;
    printf("请输入一个字母: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - ('a' - 'A');
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + ('a' - 'A');
    }

    printf("转换后的字母是: %c\n", ch);
    return 0;
}
