#include <stdio.h>

int main()
{
    int v0 = 0;
    float a = 0.19;
    float t = 0.0;
    float v = 0.0;
    printf("请输入运行时间：");
    scanf("%f", &t);
    v = v0 + a * t;
    printf("此时的速度为：%.2f m/s\n", v);
}