#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, spaces = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] == ' ') {
            spaces++;
        }

        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels++;
        }
    }

    printf("Total Vowels: %d\n", vowels);
    printf("Total Spaces: %d\n", spaces);

    return 0;
}
