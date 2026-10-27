#include <stdio.h>

int isPerfect(int n)
{
    int i, sum = 0;

    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    return sum == n;
}

int main()
{
    int start, end, i;

    printf("Enter starting and ending limits: ");
    scanf("%d %d", &start, &end);

    printf("Perfect numbers are:\n");

    for (i = start; i <= end; i++)
    {
        if (i > 1 && isPerfect(i))
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}