#include <stdio.h>

void printPinyin(int num)
{
    char *pinyin[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    if (num < 0)
    {
        printf("fu ");
        num = -num;
    }
    if (num == 0)
    {
        printf("ling\n");
        return;
    }
    int rev = 0, count = 0;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
        count++;
    }
    while (count--)
    {
        printf("%s", pinyin[rev % 10]);
        rev /= 10;
        if (count > 0)
            printf(" ");
    }
    printf("\n");
}

int main()
{
    int number;
    scanf("%d", &number);
    printPinyin(number);
    return 0;
}