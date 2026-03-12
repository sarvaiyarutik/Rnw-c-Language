

    #include <stdio.h>

    int main()
    {

        int row, col;

        int choice;

        printf("Enter row number :");
        scanf("%d", &row);

        printf("Enter col number :");
        scanf("%d", &col);

        int number[row][col];

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("Enter your element [%d][%d]:", i, j);
                scanf("%d", &number[i][j]);
            }
        }

        while (1)
        {
            printf("\n1.Read\n2.Update\n3.exit\n");
            printf("enter your choice:");
            scanf("%d", &choice);

            if (choice == 1)
            {
                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j < col; j++)
                    {
                        printf("%d ", number[i][j]);
                    }
                    printf("\n");
                }
            }

            else if (choice == 2)
            {

                int A, B, value;

                printf("Enter your row and col:");
                scanf("%d %d", &A, &B);

                printf("Enter your value:");
                scanf("%d", &value);

                if (A < row && B < col)
                {
                    number[A][B] = value;

                }
                else{
                printf("Invalid choice\n");
                }
                
            }
                else if (choice == 3)
                {
                break;
                }
                
                
        }

        return 0;
    }