#include <stdio.h>

// Function to find the maximum of two numbers
int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Find and print the maximum
    printf("The maximum of %d and %d is %d\n", num1, num2, max(num1, num2));

    return 0;
}