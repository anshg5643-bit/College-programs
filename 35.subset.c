#include <stdio.h>

int main()
{
    int a[100], b[100], used[100] = {0};
    int n, m, i, j, found, subset = 1;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    printf("Enter first array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &m);

    printf("Enter second array elements:\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < m; i++)
    {
        found = 0;

        for (j = 0; j < n; j++)
        {
            if (b[i] == a[j] && used[j] == 0)
            {
                used[j] = 1;
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            subset = 0;
            break;
        }
    }

    if (subset == 1)
        printf("Second array is a subset of first array.\n");
    else
        printf("Second array is not a subset of first array.\n");

    return 0;
}