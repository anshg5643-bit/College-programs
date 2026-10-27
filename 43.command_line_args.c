#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *source, *target;
    char ch;

    if(argc != 3)
    {
        printf("Usage: copy source.txt target.txt\n");
        return 1;
    }

    source = fopen(argv[1], "r");
    if(source == NULL)
    {
        printf("Cannot open source file.");
        return 1;
    }

    target = fopen(argv[2], "w");
    if(target == NULL)
    {
        printf("Cannot create target file.");
        fclose(source);
        return 1;
    }

    while((ch = fgetc(source)) != EOF)
        fputc(ch, target);

    fclose(source);
    fclose(target);

    printf("File copied successfully.");
    return 0;
}