#include <stdio.h>

int getValue()
{

    int num = 100 + 400;

    return num;
}

int main()
{

    int result;

    result = getValue();

    printf("%d", result);

    return 0;
}
