#include<stdio.h>

#include<string.h>
#include<ctype.h>


int main(){

   char str[] = "good morning";

   char alphabet [sizeof(str)];

   strcpy(alphabet,str);
  
   for (int  i = 0; alphabet[i] != '\0'; i++)
   {
        alphabet[i] = toupper(alphabet[i]);
   }
   

  
   printf("%s",alphabet);
    return 0;
}