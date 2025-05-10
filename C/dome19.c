#include <stdio.h>

int main()
{
    char name[50];
    int age;
    char gender;

    printf("请输入姓名: ");
    scanf("%s", name);

    printf("请输入年龄: ");
    scanf("%d", &age);

    printf("请输入性别: ");
    scanf(" %c", &gender);

    printf("\n您的信息是：%s，%d岁，性别%c\n", name, age, gender);

    return 0;
}