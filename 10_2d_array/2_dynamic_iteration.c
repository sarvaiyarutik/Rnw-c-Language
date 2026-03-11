#include <stdio.h>

int main()
{

    int array[3][3];

    printf("Enter your first element:");
    scanf("%d",&array[0][0]);

     printf("Enter your second element:");
    scanf("%d",&array[0][1]);

     printf("Enter your third element:");
    scanf("%d",&array[0][2]);

     printf("Enter your fourth element:");
    scanf("%d",&array[1][0]);

     printf("Enter your Fifth element:");
    scanf("%d",&array[1][1]);

     printf("Enter your Sixth element:");
    scanf("%d",&array[1][2]);

     printf("Enter your sevenths element:");
    scanf("%d",&array[2][0]);

     printf("Enter your eighth element:");
    scanf("%d",&array[2][1]);

     printf("Enter your nine element:");
    scanf("%d",&array[2][2]);


    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",array[i][j]);
        }

        printf("\n");
        
    }
    


    return 0;
}