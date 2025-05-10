#include <stdio.h>

int main()
{
    int n, a, sum = 0;

    // 输入n的值
    printf("请输入n的值: ");
    scanf("%d", &n);

    // 计算等差数列的和
    for (int i = n; i >= 1; i--)
    {
        a = 3 * i - 6; // 计算当前的a值
        sum += a;      // 累加到总和
    }

    // 输出结果
    printf("等差数列的和为: %d\n", sum);

    return 0;
}
