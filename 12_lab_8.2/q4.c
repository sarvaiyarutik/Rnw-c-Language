    #include <stdio.h>

    int main(){

        int row,col;
        int sum = 0;

        printf("Enter row size:");
        scanf("%d",&row);

        printf("Enter col size:");
        scanf("%d",&col);

        int number[row][col];

        for (int i = 0; i < row; i++)
        {
        for (int j = 0; j < col; j++)
        {
            printf("Enter array element[%d][%d] : ",i,j);
            scanf("%d",&number[i][j]);
        }
        }

        printf("\nBoundary elements:\n");

        for (int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
            if(i == 0 || i == 4 || j == 0 || j == 4)
            {
                printf("%d ",number[i][j]);
                sum += number[i][j];
            }
            else
            {
                printf("  ");
            }
            }
            printf("\n");
        }

        printf("\nSum of boundary element = %d",sum);

        return 0;
    }

    