#include <stdio.h>

int multiply(int a, int b)
{
    return a * b;
}

int cube(int x)
{
    return x * x * x;
}

int main()
{
    int digit1, digit2;

    printf("Enter first numbers: ");
    scanf("%d", &digit1);
    printf("Enter second numbers: ");
    scanf("%d",&digit2);

    printf("Cube of multiplication is: %d\n", cube(multiply(digit1, digit2)));

    return 0;
}