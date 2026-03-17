//---------------------2. find out area of circle using pointer and function------------------------//
#include <stdio.h>

void areaCircle(float *r)
{
    float area;
    area = 3.14 * (*r) * (*r);
    printf("Area of circle = %.2f", area);
}

int main()
{
    float radius;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    areaCircle(&radius);

    return 0;
}
