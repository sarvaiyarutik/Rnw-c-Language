

#include <stdio.h>

int main()
{

    int a = 10;

    float b = 10.12;

    char c = 'A';

    char d[] = "this is a men";

    double e = 1818;

    printf("int: %lu\n", sizeof(a));
    printf("float: %lu\n", sizeof(b));
    printf("character: %lu\n", sizeof(c));
    printf("string: %lu\n", sizeof(d));
    printf("double: %lu\n", sizeof(e));

    return 0;
}