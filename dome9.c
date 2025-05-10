#include <stdio.h>
// 找零钱问题：已知可乐每瓶2.8元，付款后，计算并输出找零金额
int main()
{
    int num = 0;
    printf("您要几瓶：");
    scanf("%d", &num);
    float money = 0.0;
    printf("请输入金额：");
    scanf("%f", &money);
    printf("找零金额为：%.1f\n", money - 2.8 * num);
    return 0;
}