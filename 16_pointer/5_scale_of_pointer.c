#include <stdio.h>

int main()
{

    int *ptr;

    int array = 100;

    ptr = &array;

    printf("Address id %d", ptr + 1);

    return 0;
}