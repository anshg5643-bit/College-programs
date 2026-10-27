#include <stdio.h>

int main()
{
    int a[100], n, i, j, count = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] != -9999)
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                    a[j] = -9999;
                }
            }
        }
    }

    printf("Total duplicate elements = %d\n", count);
    printf("Modified array:\n");

    for (i = 0; i < n; i++)
    {
        if (a[i] == -9999)
            printf("* ");
        else
            printf("%d ", a[i]);
    }

    return 0;
}