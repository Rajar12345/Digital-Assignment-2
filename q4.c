#include <stdio.h>
#include <string.h>
#define MAX_EMP 100

struct empl {
    char name[50];
    int age;
    char position[50];
    char dateOfJoin[11];
};

int main() {
    struct empl employee[MAX_EMP];
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter details of employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employee[i].name);
        printf("Age: ");
        scanf("%d", &employee[i].age);
        printf("Position: ");
        scanf("%s", employee[i].position);
        printf("Date of joining (dd/mm/yyyy): ");
        scanf("%s", employee[i].dateOfJoin);
    }

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp(employee[i].name, employee[j].name) > 0) {
                struct empl temp = employee[i];
                employee[i] = employee[j];
                employee[j] = temp;
            }
        }
    }
    
    printf("\nEmployee List sorted by name:\n\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s\n", employee[i].name);
        printf("Age: %d\n", employee[i].age);
        printf("Position: %s\n", employee[i].position);
        printf("Date of Joining: %s\n\n", employee[i].dateOfJoin);
    }
    
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            int yr1, mth1, day1, yr2, mth2, day2;
            sscanf(employee[i].dateOfJoin, "%d/%d/%d", &day1, &mth1, &yr1);
            sscanf(employee[j].dateOfJoin, "%d/%d/%d", &day2, &mth2, &yr2);
            if (yr1 > yr2 || (yr1 == yr2 && mth1 > mth2) || (yr1 == yr2 && mth1 == mth2 && day1 > day2)) {
                struct empl temp = employee[i];
                employee[i] = employee[j];
                employee[j] = temp;
            }
        }
    }
    
    // Display employee list sorted by date of joining
    printf("\nEmployee List sorted by date of joining:\n\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s\n", employee[i].name);
        printf("Age: %d\n", employee[i].age);
        printf("Position: %s\n", employee[i].position);
        printf("Date of Joining: %s\n\n", employee[i].dateOfJoin);
    }
    printf("\nEmployee List sorted by name:\n\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s\n", employee[i].name);
        //printf("Age: %d\n", employee[i].age);
        //printf("Position: %s\n", employee[i].position);
        //printf("Date of Joining: %s\n\n", employee[i].dateOfJoin);
    }
}