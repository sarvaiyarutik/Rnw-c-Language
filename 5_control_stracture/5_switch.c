

#include <stdio.h>

int main()
{

    float num1, num2;

    char operator;

    printf("Enter your num1:");
    scanf("%f", &num1);

    printf("Enter your Calculate program value :");
    scanf("%s", &operator);

    printf("Enter your num2 :");
    scanf("%f", &num2);

    switch (operator)
    {
    case '+':
        printf("Result:%.1f\n", num1+num2);

        break;

    case '-':
        printf("Result:%.1f\n", num1 - num2);

        break;

    case '*':
        printf("Result:%.1f\n", num1 * num2);

        break;

    case '/':
        printf("Result:%.1f\n", num1 / num2);

        break;

    default: 
     printf("Invalid operator\n") ;   

    }

    return 0;
}