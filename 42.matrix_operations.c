#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2, i, j, k, ch;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d%d", &r2, &c2);

    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    printf("\n1. Addition\n2. Subtraction");
    printf("\n3. Upper Triangular Matrix");
    printf("\n4. Lower Triangular Matrix");
    printf("\n5. Transpose of A");
    printf("\n6. Multiplication");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            if(r1 != r2 || c1 != c2)
            {
                printf("Addition not possible.");
                break;
            }
            for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c1; j++)
                    printf("%d ", a[i][j] + b[i][j]);
                printf("\n");
            }
            break;

        case 2:
            if(r1 != r2 || c1 != c2)
            {
                printf("Subtraction not possible.");
                break;
            }
            for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c1; j++)
                    printf("%d ", a[i][j] - b[i][j]);
                printf("\n");
            }
            break;

        case 3:
        case 4:
            if(r1 != c1)
            {
                printf("Matrix must be square.");
                break;
            }
            for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c1; j++)
                {
                    if((ch == 3 && i > j) ||
                       (ch == 4 && i < j))
                        printf("0 ");
                    else
                        printf("%d ", a[i][j]);
                }
                printf("\n");
            }
            break;

        case 5:
            for(j = 0; j < c1; j++)
            {
                for(i = 0; i < r1; i++)
                    printf("%d ", a[i][j]);
                printf("\n");
            }
            break;

        case 6:
            if(c1 != r2)
            {
                printf("Multiplication not possible.");
                break;
            }
            for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c2; j++)
                {
                    c[i][j] = 0;
                    for(k = 0; k < c1; k++)
                        c[i][j] += a[i][k] * b[k][j];
                }
            }
            for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c2; j++)
                    printf("%d ", c[i][j]);
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice.");
    }

    return 0;
}