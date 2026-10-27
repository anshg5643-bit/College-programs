#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char ch;
    int lower = 0, upper = 0;
    int digits = 0, special = 0;

    fp = fopen("input.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (islower((unsigned char)ch))
            lower++;
        else if (isupper((unsigned char)ch))
            upper++;
        else if (isdigit((unsigned char)ch))
            digits++;
        else if (!isspace((unsigned char)ch))
            special++;
    }

    fclose(fp);

    printf("Lowercase letters = %d\n", lower);
    printf("Uppercase letters = %d\n", upper);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d\n", special);

    return 0;
}