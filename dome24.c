#include <stdio.h>
// 找零钱问题：已知可乐每瓶2.5元，付款后，计算并输出找零金额
int main()
{
    int num = 0;
    printf("可乐2.5元，您购买数量为：");
    scanf("%d", &num);
    float money = 0.0;
    printf("共%.1f元，请付款：", 2.5 * num);
    scanf("%f", &money);
    if (money - 2.5 * num > 0)
    {
        printf("找零金额为：%.1f\n", money - 2.5 * num);
    }
    else if (money - 2.5 * num == 0)
    {
        printf("付款成功");
    }
    else
    {
        printf("付款不成功");
    }
    return 0;
}