

#include <stdio.h>

int getting(int a, int b)
{

    return a + b;
};

int main()
{

    int result1 = getting(20, 30);
    int result2 = getting(200, 300);
    int result3 = getting(2000, 3000);
    int result4 = getting(20000, 30000);

    printf("%d\n", result1);
    printf("%d\n", result2);
    printf("%d\n", result3);
    printf("%d\n", result4);


    return 0;
}