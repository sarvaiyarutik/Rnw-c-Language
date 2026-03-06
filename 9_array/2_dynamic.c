

#include <stdio.h>

int main()
{

    int number[5] = {100, 200, 300, 400, 500};

    printf("Enter first element:");
    scanf("%d", &number[0]);

    printf("Enter second element:");
    scanf("%d", &number[1]);

    printf("Enter thrid element:");
    scanf("%d", &number[2]);

    printf("Enter forth element:");
    scanf("%d", &number[3]);

    printf("Enter five element:");
    scanf("%d", &number[4]);

    printf("%d\n", number[0]);
    printf("%d\n", number[1]);
    printf("%d\n", number[2]);
    printf("%d\n", number[3]);
    printf("%d\n", number[4]);

    return 0;
}