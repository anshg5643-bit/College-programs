#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
    int type;
};

int main()
{
    struct Employee e;
    FILE *manager, *worker;
    int n, i;

    manager = fopen("managers.txt", "w");
    worker = fopen("workers.txt", "w");

    if(manager == NULL || worker == NULL)
    {
        printf("Error opening files.");
        if(manager != NULL)
            fclose(manager);
        if(worker != NULL)
            fclose(worker);
        return 1;
    }

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter employee ID: ");
        scanf("%d", &e.id);

        printf("Enter employee name: ");
        scanf(" %49[^\n]", e.name);

        printf("Enter salary: ");
        scanf("%f", &e.salary);

        printf("Enter type (1 for Manager, 2 for Worker): ");
        scanf("%d", &e.type);

        if(e.type == 1)
        {
            fprintf(manager, "ID: %d\nName: %s\nSalary: %.2f\n\n",
                    e.id, e.name, e.salary);
        }
        else if(e.type == 2)
        {
            fprintf(worker, "ID: %d\nName: %s\nSalary: %.2f\n\n",
                    e.id, e.name, e.salary);
        }
        else
        {
            printf("Invalid employee type.\n");
        }
    }

    fclose(manager);
    fclose(worker);

    printf("\nRecords saved in managers.txt and workers.txt.");
    return 0;
}