

#include <stdio.h>
#include<string.h>

int main()
{

   char str[] = "Javascript";

   int len = strlen(str);

   int i,j;

   for (i = len - 1; i>= 0;i--)
   {
       printf("%c\n",str[i]);
   }
   


    return 0;
}