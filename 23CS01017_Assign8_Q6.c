#include <stdio.h>
int main()
{
    int count1, count2;
    printf("Enter len of 1st string: ");
    scanf("%d", &count1);
    getchar();
    char arr1[count1 + 1];
    printf("Enter 1st string: ");
    for (int i = 0; i < count1; i++)
        scanf("%c", (arr1 + i));
    arr1[count1 + 1] = '\0';

    printf("Enter len of 2nd string: ");
    scanf("%d", &count2);
    getchar();
    char arr2[count2 + 1];
    printf("Enter 2nd string: ");
    for (int i = 0; i < count2; i++)
        scanf("%c", (arr2 + i));
    arr2[count2 + 1] = '\0';

    int arr[count1 + count2];
    for (int i = 0; i < count1; i++)
        *(arr + i) = *(arr1 + i);
    for (int i = 0; i < count2; i++)
        *(arr + count1 + i) = *(arr2 + i);
    arr[count1 + count2] = '\0';
    for (int i = 0; i < count1 + count2 + 1; i++)
        printf("%c", *(arr + i));
    return 0;
}