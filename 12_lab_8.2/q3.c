

#include <stdio.h>

int main()
{

    int row, col, sum = 0;

    printf("Enter your row size:");
    scanf("%d", &row);

    printf("Enter your col size:");
    scanf("%d", &col);

    int number[row][col];

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            printf("Enter your array element[%d][%d]", i, j);
            scanf("%d", &number[i][j]);
        }

        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", number[i][j]);
        }

        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {

        sum = sum + number[i][row - 1 - i];
    }

    printf("The sum of diagonal element of an array :%d\n", sum);

    return 0;
}