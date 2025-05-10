#include <stdio.h>

int main()
{
    int numbers[10];

    printf("请输入10个整数:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        int temp = numbers[i];
        numbers[i] = numbers[9 - i];
        numbers[9 - i] = temp;
    }

    printf("逆序输出结果:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}