//--------------------------3. Find out maximum and minimum number using pointer to function.------------------//
#include <stdio.h>

void findMaxMin(int a, int b, int *max, int *min) {
    if (a > b) {
        *max = a;
        *min = b;
    } else {
        *max = b;
        *min = a;
    }
}

int main() {
    int num1, num2;
    int maximum, minimum;
    void (*ptr)(int, int, int*, int*);
    ptr = findMaxMin;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    ptr(num1, num2, &maximum, &minimum);

    printf("Maximum number = %d\n", maximum);
    printf("Minimum number = %d\n", minimum);

    return 0;
}
