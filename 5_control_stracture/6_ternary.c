

#include <stdio.h>

int main()
{

    int age = 18;

    // if (age >17)
    // {
    //     printf("you have not eligible voting");
    // }

    // else{
    //     printf("you have eligible voting");
    // }

    (age > 18) ? printf("you have not eligible voting") : printf("you have eligible voting");
    return 0;
}