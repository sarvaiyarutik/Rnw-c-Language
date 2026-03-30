#include<stdio.h>


int main(){

    int number = 100;

    int *ptr1;


    ptr1 = &number;

    printf("%u => %d\n",ptr1,*ptr1);

    int **ptr2;

    ptr2 = &ptr1;

    printf("%u => %d\n",ptr2);

    **ptr2 = 200;

    printf("%d",number);


    return 0;
}