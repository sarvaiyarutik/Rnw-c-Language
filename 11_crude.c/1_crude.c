

#include <stdio.h>

int main()
{

    int array[5] = {100, 200, 300, 400, 500};

    // read

    printf("\nArray Element:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    // update

    array[3] = 500;

    printf("\nupdate value:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    // delete

    for (int i = 0; i < 5; i++)
    {
        array[5] = array[i + 1];
    }

    printf("\nDelete value : \n");

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}