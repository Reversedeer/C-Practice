#include <stdio.h>

int main()
{
    int num, result = 0;

    printf("请输入一个三位整数: ");
    scanf("%d", &num);

    result += (num % 10) * 100;
    num /= 10;
    result += (num % 10) * 10;
    num /= 10;
    result += num;

    printf("反向输出为: %d\n", result);

    return 0;
}
