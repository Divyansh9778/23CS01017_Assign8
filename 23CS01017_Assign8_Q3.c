#include <stdio.h>
int main()
{
    int len;
    printf("Length: ");
    scanf("%d", &len);
    int arr[len];
    printf("Enter: ");
    for (int i = 0; i < len; i++)
        scanf("%d", &arr[i]);
    int *p = arr;
    for (int i = 0; i < len / 2; i++)
    {
        int temp = *(p + i);
        *(p + i) = *(p + (len - i - 1));
        *(p + (len - i - 1)) = temp;
    }
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    return 0;
}