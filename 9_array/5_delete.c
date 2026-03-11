
#include <stdio.h>

int main()
{
   int num[5] = {100, 200, 300, 400, 500};
   
   int d = 2;
   
   for(int i = d; i < 4; i++){
       
       num[i] = num[i + 1];
   }
   
   for(int i = 0; i <= 4; i++){
       printf("%d\n",num[i]);
   }
    return 0;
}