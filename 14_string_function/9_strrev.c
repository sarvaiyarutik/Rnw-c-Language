#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, len = 0;

    printf("Enter a string: ");
    scanf("%s", str1);

    for(i = 0; str1[i] != '\0'; i++) {
        len++;
    }

    for(i = 0; i < len; i++) {
        str2[i] = str1[len - i - 1];
    }

    str2[i] = '\0';

    printf("Reversed string: %s", str2);

    return 0;
}