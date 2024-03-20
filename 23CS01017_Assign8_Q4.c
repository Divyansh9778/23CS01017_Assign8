#include <stdio.h>
int again(int *nums, int n)
{
    int sum = 1;
    for (int i = 0; i < n; i++)
        if (*(nums + i + 1) == *(nums + i))
            printf("%d is repeating more than once!", *(nums + i));
}
int main()
{
    int n;
    printf("Length: ");
    scanf("%d", &n);
    int nums[n + 1];
    for (int i = 0; i < n + 1; i++)
        scanf("%d", &nums[i]);
    again(nums, n + 1);
    return 0;
}