#include <stdio.h>

int main() {
    char name[50];
    int i;


    printf("Enter your name: ");

    scanf("%[^\n]s", name);

    printf("\nYour name vertically:\n");


    for (i = 0; name[i] != '\0'; i++) {

        printf("%c\n", name[i]);
    }

    return 0;
}
