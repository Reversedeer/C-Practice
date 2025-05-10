#include <stdio.h>

int main()
{
    int n;
    printf("请输入一个正整数: ");
    scanf("%d", &n);

    if (n > 1)
    {
        printf("%d=", n);
        for (int i = 2; i <= n; i++)
        {
            while (n % i == 0)
            {
                printf("%d", i);
                n /= i;
                if (n > 1)
                    printf("*");
            }
        }
        printf("\n");
    }
    else
    {
        printf("请输入大于1的正整数。\n");
    }

    return 0;
}
