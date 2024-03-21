#include <stdio.h>
void rotate(int row, int col, int n, int (*mat)[col])
{
    if (n % 4 == 1)
    {
        int rot_mat[col][row];
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                *(*(rot_mat + j) + (row - 1 - i)) = *(*(mat + i) + j);
        for (int i = 0; i < col; i++)
        {
            for (int j = 0; j < row; j++)
                printf("%d ", *(*(rot_mat + i) + j));
            printf("\n");
        }
    }
    else if (n % 4 == 2)
    {
        int rot_mat[row][col];
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                *(*(rot_mat + (row - 1 - i)) + (col - 1 - j)) = *(*(mat + i) + j);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
                printf("%d ", *(*(rot_mat + i) + j));
            printf("\n");
        }
    }
    else if (n % 4 == 3)
    {
        int rot_mat[col][row];
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                *(*(rot_mat + (col - 1 - j)) + i) = *(*(mat + i) + j);
        for (int i = 0; i < col; i++)
        {
            for (int j = 0; j < row; j++)
                printf("%d ", *(*(rot_mat + i) + j));
            printf("\n");
        }
    }
    else
    {
        int rot_mat[row][col];
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                *(*(rot_mat + i) + j) = *(*(mat + i) + j);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
                printf("%d ", *(*(rot_mat + i) + j));
            printf("\n");
        }
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
