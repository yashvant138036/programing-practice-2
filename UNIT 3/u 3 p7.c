//-------------------------7. Add two matrices using array of pointers.-----------------------//
#include <stdio.h>

int main()
{
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c], sum[r][c];

    int *p1[r], *p2[r], *p3[r];
    for(i = 0; i < r; i++)
    {
        p1[i] = a[i];
        p2[i] = b[i];
        p3[i] = sum[i];
    }

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &p1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &p2[i][j]);
        }
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            p3[i][j] = p1[i][j] + p2[i][j];
        }
    }

    printf("Sum of matrices:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", p3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
