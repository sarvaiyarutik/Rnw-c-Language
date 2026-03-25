#include <stdio.h>

int sum(int num1, int num2, char operator)
{

    if (operator == '+')
    {
        return num1 + num2;
    }
    else if (operator == '-')
    {
       return num1 - num2;
    }
    else if (operator == '*')
    {
        return num1 * num2;
    }
    else if (operator == '/')
    {
        return num1 / num2;
    }
     else if (operator == '%')
    {
        return num1 % num2;
    }
    else{
        printf("Invalid choice");

    }
    
    
}

int main()
{

    int num1, num2, result;

    char operator;

    printf("Enter first number:");
    scanf("%d", &num1);

    printf("Enter second number:");
    scanf("%d", &num2);

    printf("Enter operator value:");
    scanf(" %c", &operator);

    printf("Operation", operator);

    result = sum(num1, num2 , operator);

    printf("Total result :%d",result);

    return 0;
}