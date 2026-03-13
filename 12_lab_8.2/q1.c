

#include <stdio.h>

int main()
{

    int row, col, sum = 0;

    float avg;

    printf("Enter your row:");
    scanf("%d", &row);

    printf("Enter your col:");
    scanf("%d", &col);

    int number[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            printf("Enter your element [%d][%d]", i, j);
            scanf("%d", &number[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            printf("%d ", number[i][j]);

            sum = sum + number[i][j];
        }

        printf("\n");
    }

    avg = sum / (row * col);

    printf("avg in a array : %.2f ", avg);

    return 0;
}