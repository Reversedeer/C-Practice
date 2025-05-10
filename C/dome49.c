#include <stdio.h>

int main()
{
    char a[5] = {'*', '*', '*', '*', '*'};
    char b[5] = {'*', '*', '*', '*', '*'};
    char c[5] = {'*', '*', '*', '*', '*'};
    char d[5] = {'*', '*', '*', '*', '*'};
    char e[5] = {'*', '*', '*', '*', '*'};

    printf("%s\n", a);
    printf("%s\n", b);
    printf("%s\n", c);
    printf("%-.s\n", d);
    printf("%-2.s\n", e);
}