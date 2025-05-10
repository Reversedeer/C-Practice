#include <stdio.h>
#include <ctype.h>

int main()
{
    char input[100], output[100];
    int j = 0;

    printf("请输入一个字符串: ");
    scanf("%99s", input);

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (isupper(input[i]))
        {
            output[j++] = tolower(input[i]);
        }
    }
    output[j] = '\0';

    printf("转换后的字符串: %s\n", output);
    return 0;
}
