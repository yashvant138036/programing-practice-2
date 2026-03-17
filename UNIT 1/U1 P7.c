//------------------------7. Merge two arrays.-----------------//
#include <stdio.h>

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = n1 + n2;

    int mergedArr[n3];
    int i, j;

    for (i = 0; i < n1; i++)
    {
        mergedArr[i] = arr1[i];
    }

    for (j = 0; j < n2; j++)
    {
        mergedArr[i + j] = arr2[j];
    }
    printf("Merged Array: ");
    for (i = 0; i < n3; i++)
    {
        printf("%d ", mergedArr[i]);
    }

    return 0;
}

