//---------------------12. Enter a string and print it in lowercase letters.----------------//
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        str[i] = tolower(str[i]);
        i++;
    }

    printf("Lowercase string: %s", str);

    return 0;
}
