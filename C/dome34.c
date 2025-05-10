#include <stdio.h>

int main()
{
    char input[100];
    int uppercase = 0, lowercase = 0, digits = 0, others = 0;

    printf("请输入一串符号: ");
    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] >= 'A' && input[i] <= 'Z')
        {
            uppercase++;
        }
        else if (input[i] >= 'a' && input[i] <= 'z')
        {
            lowercase++;
        }
        else if (input[i] >= '0' && input[i] <= '9')
        {
            digits++;
        }
        else if (input[i] != '\n')
        {
            others++;
        }
    }

    printf("大写字母个数: %d\n", uppercase);
    printf("小写字母个数: %d\n", lowercase);
    printf("数字个数: %d\n", digits);
    printf("其他字符个数: %d\n", others);

    return 0;
}
