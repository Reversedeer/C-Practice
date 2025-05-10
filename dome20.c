#include <stdio.h>

int main()
{
    int str = 0;
    char a;

    printf("请输入一个数字 (1 或 2): ");
    scanf("%d", &str);
    getchar();
    switch (str)
    {
    case 1:
        printf("请输入ADD (使用scanf): ");
        char input[4]; // 用于存储输入的字符串
        scanf("%3s", input);
        printf("printf输出: %s\n", input);
        break;

    case 2:
        printf("请输入ADD (使用getchar): ");
        while ((a = getchar()) != '\n')
        {
            putchar(a);
        }
        putchar('\n');
        break;

    default:
        printf("无效输入，请输入 1 或 2。\n");
        break;
    }

    return 0;
}