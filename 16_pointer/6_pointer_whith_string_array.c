

#include <stdio.h>

int main()
{

    int *ptr;

    int array[5] = {100, 200, 300, 400, 500};

    ptr = array;

    // printf("%u =: %d", ptr, *(ptr));

    for (int i = 0; i < 5; i++)
    {

        printf("%u => %d\n", ptr + i, *(ptr + i));
    }

    return 0;
}