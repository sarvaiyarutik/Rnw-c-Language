

#include <stdio.h>

int main()
{

    int subject;

    printf("1. Gujarati\n");
    printf("2. Hindi\n");
    printf("3. English\n");
    printf("4. Marathi\n");
    printf("5. Tamil\n");

    printf("Enter your choice: ");
    scanf("%d", &subject);

    switch (subject)
    {
    case '1':
        printf("Gujarati\n");
        break;

    case 2:
        printf("Hindi\n");
        break;

    case 3:
        printf("English\n");
        break;

    case 4:
        printf("Marathi\n");
        break;

    case 5:
        printf("Tamil\n");
        break;

    default:
        printf("Invalid choice");
    }
}