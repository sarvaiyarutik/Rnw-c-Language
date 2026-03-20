

#include <stdio.h>

#include<string.h>


int main(){

    char str[] = "programming";

    char destination [sizeof(str)];

    

    strcpy(destination,str);

    printf("strcpy in string %s",destination);

    return 0;
}