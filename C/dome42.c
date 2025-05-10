#include <stdio.h>

int main()
{
    int num = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%-3d ", num++);
        }
        printf("\n");
    }
    return 0;
}