

#include <stdio.h>

int main()
{

    int x, y,temp;

    int *ptr1,*ptr2;

    printf("Enter the value :");
    scanf("%d", &x);

    printf("Enter the value :");
    scanf("%d", &y);

    ptr1 = &x;

    ptr2 = &y;

   temp = *ptr1;  
    *ptr1 = *ptr2;  
    *ptr2 = temp;

    printf("x: %d\n", *ptr1); 
    printf("y: %d\n", *ptr2);


    return 0;
}