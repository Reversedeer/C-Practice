#include <stdio.h>

int main()
{
    int numbers[10];
    int sum = 0;

    printf("请输入10个整数:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("所有偶数的值为:\n");
    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            printf("%d ", numbers[i]);
            sum += numbers[i];
        }
    }

    printf("\n偶数的和为: %d\n", sum);

    return 0;
}