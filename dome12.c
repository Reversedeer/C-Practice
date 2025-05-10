#include <stdio.h>

int main()
{
    int v0 = 15;
    int v1 = 20;
    int t = 10;
    int s = v0 * t;
    int t1 = s / (v1 - v0);
    printf("追上的时间为：%d 分钟\n", t1);
    return 0;
}