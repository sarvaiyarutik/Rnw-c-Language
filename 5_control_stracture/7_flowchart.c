

#include <stdio.h>

int main()
{

    int x, y, z;

    printf("Enter your number:");
    scanf("%d %d %d",&x,&y,&z);

    if (x >= y)
    {
       if (x >= z)
       {
         printf("x is the largest");
       }

       else{
        printf("z is the  largest");
       }
       
    }

    else{
        if (y >= z)
        {
            printf("y is the largest");
        }

        else{
            printf("z is the largest");
        }
        
    }
    

    return 0;
}