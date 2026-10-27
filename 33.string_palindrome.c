#include <stdio.h>

int main()
{
    char str[200];
    int i, length = 0, palindrome = 1;

    printf("Enter a string: ");
    scanf(" %199[^\n]", str);

    while (str[length] != '\0')
    {
        length++;
    }

    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1)
        printf("String is a palindrome.\n");
    else
        printf("String is not a palindrome.\n");

    return 0;
}