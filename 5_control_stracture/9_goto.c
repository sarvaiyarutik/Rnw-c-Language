

#include <stdio.h>

int main()
{

    int age = 18;

    if (age >= 18)
    {
        goto number1;
    }
    number1:
    printf("your age is %d",age);

    return 0;
}