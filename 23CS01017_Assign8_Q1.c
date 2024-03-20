#include <stdio.h>
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int temp = *(&z);
    *(&z) = *(&y);
    *(&y) = *(&x);
    *(&x) = temp;
    printf("%d %d %d", x, y, z);
    return 0;
}