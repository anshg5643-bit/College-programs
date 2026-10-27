#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0;
    int *ptr;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    ptr = a;

    for (i = 0; i < n; i++)
    {
        sum = sum + *(ptr + i);
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}