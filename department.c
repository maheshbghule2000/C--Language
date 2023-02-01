/*Here is an example of a department management system program 
in C language using the switch case statement:*/
#include <stdio.h>
#include <string.h>

#define MAX_DEPARTMENTS 100
#define MAX_EMPLOYEES 1000
#define MAX_NAME_LENGTH 50

struct Employee {
    int id;
    char name[MAX_NAME_LENGTH];
    int departmentId;
};

struct Department {
    int id;
    char name[MAX_NAME_LENGTH];
};

int main() {
    struct Department departments[MAX_DEPARTMENTS];
    struct Employee employees[MAX_EMPLOYEES];
    int numDepartments = 0, numEmployees = 0;
    int id, departmentId;
    char name[MAX_NAME_LENGTH];
    char choice;

    do {
        printf("\nDepartment Management System\n");
        printf("1. Add Department\n");
        printf("2. Add Employee\n");
        printf("3. List Departments\n");
        printf("4. List Employees\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch(choice) {
            case '1':
                printf("Enter department id: ");
                scanf("%d", &id);
                printf("Enter department name: ");
                scanf("%s", name);
                departments[numDepartments].id = id;
                strcpy(departments[numDepartments].name, name);
                numDepartments++;
                break;
            case '2':
                printf("Enter employee id: ");
                scanf("%d", &id);
                printf("Enter employee name: ");
                scanf("%s", name);
                printf("Enter department id: ");
                scanf("%d", &departmentId);
                employees[numEmployees].id = id;
                strcpy(employees[numEmployees].name, name);
                employees[numEmployees].departmentId = departmentId;
                numEmployees++;
                break;
            case '3':
                printf("\nDepartments:\n");
                for (int i = 0; i < numDepartments; i++) {
                    printf("%d %s\n", departments[i].id, departments[i].name);
                }
                break;
            case '4':
                printf("\nEmployees:\n");
                for (int i = 0; i < numEmployees; i++) {
                    printf("%d %s %d\n", employees[i].id, employees[i].name, employees[i].departmentId);
                }
                break;
            case '5':
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != '5');

    return 0;
}
