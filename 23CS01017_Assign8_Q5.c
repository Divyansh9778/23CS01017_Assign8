#include <stdio.h>
void rotate(int row, int col, int n, int (*mat)[col])
{
    if (n % 4 == 0)
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
                printf("%d ", *(*(mat + i) + j));
            printf("\n");
        }
    if (n % 4 == 1)
        for (int j = 0; j < col; j++)
        {
            for (int i = row - 1; i >= 0; i--)
                printf("%d ", *(*(mat + i) + j));
            printf("\n");
        }
    if (n % 4 == 2)
        for (int j = row - 1; j >= 0; j--)
        {
            for (int i = col - 1; i >= 0; i--)
                printf("%d ", *(*(mat + j) + i));
            printf("\n");
        }
    if (n % 4 == 3)
        for (int j = col - 1; j >= 0; j--)
        {
            for (int i = 0; i < row; i++)
                printf("%d ", *(*(mat + i) + j));
            printf("\n");
        }
}
int main()
{
    int row, col, n;
    printf("Dimensions: ");
    scanf("%d", &row);
    scanf("%d", &col);
    int mat[row][col];
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &*(*(mat + i) + j));
    printf("No of Rotations: ");
    scanf("%d", &n);
    rotate(row, col, n, mat);
    return 0;
}