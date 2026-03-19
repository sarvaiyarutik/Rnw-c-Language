
#include <stdio.h>


int main(){

    char modification1[] = "my neme is rutik";

    modification1[4] = 'a';



    printf("%s\n",modification1);


    char modification2[24] = "my idal is Virat Kohli";
   
    modification2[5] = 'e';


   
    for (int i = 0; modification2[i] != '\0'; i++)
    {
        printf("%c\n", modification2[i]);
    }
    
    return 0;
}