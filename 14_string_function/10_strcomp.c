

#include <stdio.h>

int main()
{

    char str1[100], str2[100];

    int i, length = 0;

    printf("Enter string: ");
    scanf("%s", str1);

    printf("Enter string: ");
    scanf("%s", str2);

    for (int i = 0; str1[i] == str2[i]; i++)
    {

        if (str1[i] == '\0')
        {
            printf("is equal");

            return 0;
        }
    }

    printf("is Not Equal");

    return 0;
}