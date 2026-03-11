
#include <stdio.h>

int main()
{

    int number[5] = {100, 200, 300, 400, 500};

    number[4] = 10000;

    printf("%d\n",number[4]);
    
    printf("Enter your update\n");
    scanf("%d",&number[1]);
    
    printf("%d",number[1]);
    
    return 0;
} 

