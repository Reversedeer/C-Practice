#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
    }

    printf("结果输出为: %d\n", sum);
    return 0;
}