

#include<stdio.h>

int getting(int *num){


    *num = 200;
}


int main(){

    int number = 100;

    int *ptr;

    ptr = &number;

    int result = getting(ptr);

    printf("number : %d\n",number);

    return 0;
}