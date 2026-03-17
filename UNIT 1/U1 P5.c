//-----------------------------------------5. Copy the elements of one array into another----------------------------------//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int source[n], destination[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &source[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    for (int i = 0; i < n; i++) {
        destination[i] = source[i];
    }

    printf("\nSource array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", source[i]);
    }

    printf("\nCopied array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }

    printf("\n");
    return 0;
}

