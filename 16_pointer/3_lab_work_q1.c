#include <stdio.h>

int main()
{

    int n, i;
    int *p;

    printf("Enter the array size:");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        printf("A[%d] ", i);
        scanf("%d", &array[i]);
    }

    p = array;

    for (int  i = 0; i < n; i++)
    {
        int answer = p[i] * p[i];

        printf("%d",answer);

        if(i < n - 1)

        printf(", ");
    }
    
    

    return 0;
}