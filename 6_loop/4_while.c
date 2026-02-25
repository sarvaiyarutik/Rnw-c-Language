#include <stdio.h>

int main() {

    int num = 0;
    int i = 1;

    while (i <= 1000)
    {
        num = num + i;
        i++;
    }

    printf("%d", num);

    return 0;
}