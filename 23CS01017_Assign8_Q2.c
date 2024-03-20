#include <stdio.h>
int main()
{
    int a, b, p, q;
    printf("Order of 1st Matrix (a,b): ");
    scanf("%d %d", &a, &b);
    printf("Order of 2nd Matrix (p,q): ");
    scanf("%d %d", &p, &q);
    if (b != p)
    {
        printf("ERROR 404!!\n");
        return 0;
    }
    int A[a][b], B[p][q], AB[a][q];
    printf("1st Matrix: ");
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            scanf("%d", &(*(*(A + i) + j)));

    printf("2nd Matrix: ");
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &(*(*(B + i) + j)));

    for (int i = 0; i < a; i++)
        for (int j = 0; j < q; j++)
        {
            int temp = 0;
            AB[i][j] = 0;
            while (temp < b)
            {
                *(*(AB + i) + j) += (*(*(A + i) + temp)) * (*(*(B + temp) + j));
                temp++;
            }
        }

    printf("Resultant Matrix:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < q; j++)
            printf("%d ", *(*(AB + i) + j));
        printf("\n");
    }
    return 0;
}