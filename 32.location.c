#include <stdio.h>

int main()
{
    char str[200], word[50];
    int i, j, found = 0;

    printf("Enter a string: ");
    scanf(" %199[^\n]", str);

    printf("Enter the word to search: ");
    scanf(" %49[^\n]", word);

    for (i = 0; str[i] != '\0'; i++)
    {
        j = 0;

        while (word[j] != '\0' && str[i + j] == word[j])
        {
            j++;
        }

        if (word[j] == '\0' &&
            (i == 0 || str[i - 1] == ' ') &&
            (str[i + j] == '\0' || str[i + j] == ' '))
        {
            printf("Word found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Word not found.\n");
    }

    return 0;
}