#include <stdio.h>

int main()
{
    int arr[10];
    int i, j, temp;

    // 输入10个数
    printf("请输入10个整数：\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 冒泡排序，从大到小
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // 输出排序后的数组
    printf("排序后的数组（从大到小）：\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}