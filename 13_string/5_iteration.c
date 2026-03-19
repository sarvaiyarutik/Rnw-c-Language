
#include <stdio.h>

int main(){


    char number1[5] = {'R','u','t','i','k'};

    printf("%c",number1[0]);
    printf("%c",number1[1]);
    printf("%c",number1[2]);
    printf("%c",number1[3]);
    printf("%c\n",number1[4]);


    char number2[5];

    for (int i = 0; i < 5; i++)
    {

       scanf("%c",&number2[i]);
    }

    for (int i = 0; i < 5; i++)
    {
       printf("%c",number2[i]);
    }
    
    

    return 0; 
}