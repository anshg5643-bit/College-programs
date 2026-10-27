#include <stdio.h>

int main()
{
    int a[100], n, p, i, temp[100], k = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter split position (1 to %d): ", n);
    scanf("%d", &p);

    if (p < 1 || p > n)
    {
        printf("Invalid position");
        return 0;
    }

    for (i = p; i < n; i++)
    {
        temp[k] = a[i];
        k++;
    }

    for (i = 0; i < p; i++)
    {
        temp[k] = a[i];
        k++;
    }

    printf("Array after splitting:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", temp[i]);
    }

    return 0;
}