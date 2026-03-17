//-----------------------8. Subtract two matrices using pointer to pointer.-------------------------//
#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], c[2][2];
    int **p1, **p2, **p3;
    int *row1[2], *row2[2], *row3[2];
    int i,j;

    for(i=0;i<2;i++)
    {
        row1[i]=a[i];
        row2[i]=b[i];
        row3[i]=c[i];
    }

    p1=row1;
    p2=row2;
    p3=row3;

    printf("Enter first matrix:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&p1[i][j]);

    printf("Enter second matrix:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&p2[i][j]);

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            p3[i][j] = p1[i][j] - p2[i][j];

    printf("Subtraction of matrices:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%d ",p3[i][j]);
        printf("\n");
    }

    return 0;
}
