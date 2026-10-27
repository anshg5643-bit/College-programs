#include <stdio.h>

int main()
{
    char str[200];
    char *ptr;
    int length = 0;

    printf("Enter a string: ");
    scanf(" %199[^\n]", str);

    ptr = str;

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    printf("Length of string = %d\n", length);

    return 0;
}