#include <stdio.h>
int main()
{
    double num = 100;
    double sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        num = num / 2;
        sum = sum + num;
    }
    printf("第10次落地共经过%.9f米\n反弹高度为：%.9f米", sum, num);
    return 0;
}