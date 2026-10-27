#include <stdio.h>

int main()
{
    char str1[200], str2[200], copy[200];
    int choice, i, j, length;

    do
    {
        printf("\n--- STRING OPERATIONS ---\n");
        printf("1. Find Length\n");
        printf("2. Concatenate Strings\n");
        printf("3. Reverse String\n");
        printf("4. Copy String\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter a string: ");
                scanf(" %199[^\n]", str1);

                length = 0;
                while (str1[length] != '\0')
                {
                    length++;
                }

                printf("Length = %d\n", length);
                break;

            case 2:
                printf("Enter first string: ");
                scanf(" %99[^\n]", str1);

                printf("Enter second string: ");
                scanf(" %99[^\n]", str2);

                i = 0;
                while (str1[i] != '\0')
                {
                    i++;
                }

                j = 0;
                while (str2[j] != '\0')
                {
                    str1[i] = str2[j];
                    i++;
                    j++;
                }

                str1[i] = '\0';

                printf("Concatenated string: %s\n", str1);
                break;

            case 3:
                printf("Enter a string: ");
                scanf(" %199[^\n]", str1);

                length = 0;
                while (str1[length] != '\0')
                {
                    length++;
                }

                printf("Reversed string: ");
                for (i = length - 1; i >= 0; i--)
                {
                    printf("%c", str1[i]);
                }
                printf("\n");
                break;

            case 4:
                printf("Enter a string: ");
                scanf(" %199[^\n]", str1);

                i = 0;
                while (str1[i] != '\0')
                {
                    copy[i] = str1[i];
                    i++;
                }

                copy[i] = '\0';

                printf("Copied string: %s\n", copy);
                break;

            case 5:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}