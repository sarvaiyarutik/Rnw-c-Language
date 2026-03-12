#include <stdio.h>

int main()
{

    int array[5] = {100, 200, 300, 400, 500};

    // Read
    printf("\nArray Element:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    // Update
    array[3] = 600;

    printf("\nUpdate value:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    // Delete index 2
    for (int i = 2; i < 4; i++)
    {
        array[i] = array[i + 1];
    }

    printf("\nDelete value:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}