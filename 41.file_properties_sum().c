#include <stdio.h>

long sum(FILE *fp)
{
    long count = 0;
    int ch;

    while ((ch = fgetc(fp)) != EOF)
    {
        count++;
    }

    return count;
}

int main()
{
    FILE *fp;
    char filename[100];
    long size;

    printf("Enter file name: ");
    scanf("%99s", filename);

    fp = fopen(filename, "rb");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 0;
    }

    size = sum(fp);

    printf("File name: %s\n", filename);
    printf("File size: %ld bytes\n", size);

    fclose(fp);

    return 0;
}