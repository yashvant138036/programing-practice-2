//--------------------13. Enter a string and print it in reverse order.------------------//
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    strrev(str);

    printf("Reversed string: %s", str);

    return 0;
}
