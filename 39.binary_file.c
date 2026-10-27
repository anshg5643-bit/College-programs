#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s;
    FILE *fp;
    int choice, roll, found;

    do
    {
        printf("\n--- STUDENT FILE MENU ---\n");
        printf("1. Store record\n");
        printf("2. Read records\n");
        printf("3. Edit record\n");
        printf("4. Append record\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                fp = fopen("Student.txt", "wb");

                if (fp == NULL)
                {
                    printf("File cannot be opened.\n");
                    break;
                }

                printf("Enter roll, name and marks: ");
                scanf("%d %49s %f",
                      &s.roll, s.name, &s.marks);

                fwrite(&s, sizeof(s), 1, fp);
                fclose(fp);
                printf("Record stored.\n");
                break;

            case 2:
                fp = fopen("Student.txt", "rb");

                if (fp == NULL)
                {
                    printf("File cannot be opened.\n");
                    break;
                }

                while (fread(&s, sizeof(s), 1, fp) == 1)
                {
                    printf("Roll: %d, Name: %s, Marks: %.2f\n",
                           s.roll, s.name, s.marks);
                }

                fclose(fp);
                break;

            case 3:
                fp = fopen("Student.txt", "r+b");

                if (fp == NULL)
                {
                    printf("File cannot be opened.\n");
                    break;
                }

                printf("Enter roll number to edit: ");
                scanf("%d", &roll);
                found = 0;

                while (fread(&s, sizeof(s), 1, fp) == 1)
                {
                    if (s.roll == roll)
                    {
                        printf("Enter new name and marks: ");
                        scanf("%49s %f", s.name, &s.marks);

                        fseek(fp, -(long)sizeof(s), SEEK_CUR);
                        fwrite(&s, sizeof(s), 1, fp);
                        found = 1;
                        break;
                    }
                }

                if (found)
                    printf("Record updated.\n");
                else
                    printf("Record not found.\n");

                fclose(fp);
                break;

            case 4:
                fp = fopen("Student.txt", "ab");

                if (fp == NULL)
                {
                    printf("File cannot be opened.\n");
                    break;
                }

                printf("Enter roll, name and marks: ");
                scanf("%d %49s %f",
                      &s.roll, s.name, &s.marks);

                fwrite(&s, sizeof(s), 1, fp);
                fclose(fp);
                printf("Record appended.\n");
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