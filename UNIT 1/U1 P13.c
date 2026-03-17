//------------------13. Enter a string and find out length of string with using string function and without string function.--------------------//
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");

    fgets(str, sizeof(str), stdin);


    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    printf("Length of the string using strlen: %d\n", length);

    return 0;
}
