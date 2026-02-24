#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Original string: %s\n", str);


    strrev(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
