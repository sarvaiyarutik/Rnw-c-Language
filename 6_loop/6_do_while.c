

#include <stdio.h>

int main()
{

    int num = 0;

    int i = 1;

    do
    {

    
        num += i;

    } 
    while (i <= 1000);
    
    printf("%d\n", num);
    return 0;
}