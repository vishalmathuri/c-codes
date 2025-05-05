#include <stdio.h>
#include <string.h>

// Define structure for Employee
struct Employee {
    char name[50];
    int age;
    float salary;
};

int main() {
    int n, i, highestIndex = 0;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];  // Using VLA (Variable Length Array)

    // Input employee details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Age: ");
        scanf("%d", &emp[i].age);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Find employee with highest salary
    for (i = 1; i < n; i++) {
        if (emp[i].salary > emp[highestIndex].salary) {
            highestIndex = i;
        }
    }

    // Display employee with the highest salary
    printf("Employee with the highest salary:\n");
    printf("Name: %s\n", emp[highestIndex].name);
    printf("Age: %d\n", emp[highestIndex].age);
    printf("Salary: %.2f\n", emp[highestIndex].salary);

    return 0;
}
