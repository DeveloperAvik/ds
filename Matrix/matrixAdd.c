#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r1, c1, r2, c2, i, j;
    printf("Enter row and column of the 1st matrix=");
    scanf("%d%d", &r1, &c1);

    printf("Enter row and column of the 2nd matrix=");
    scanf("%d%d", &r2, &c2);
    if (r1 != r2 && r2 != c2)
    {
        printf("Wrong input");
        exit(1);
    }
    int *mat1[r1], *mat2[r1], *mat3[r1];
    for (i = 0; i < r1; i++)
    {
        mat1[i] = (int *)malloc(c1 * sizeof(int));
        mat2[i] = (int *)malloc(c1 * sizeof(int));
        mat3[i] = (int *)malloc(c1 * sizeof(int));
    }
    printf("Enter the value of 1st matrix=\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the value of 2nd matrix=\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("\nThe result is---\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf(" %d", mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
