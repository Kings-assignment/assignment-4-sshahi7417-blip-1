// Write a C program that defines a structure Employee with members: name, employee ID, and salary. 
// Take input for 5 employees and display the details of the employee with the highest salary.

#include <stdio.h>

typedef struct {
    char name[50];
    int employeeID;
    float salary;
} Employee;

int main() {
    Employee emp[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Employee ID: ");
        scanf("%d", &emp[i].employeeID);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (emp[i].salary > emp[maxIndex].salary)
            maxIndex = i;
    }
    printf("\n--- Employee with Highest Salary ---\n");
    printf("Name: %s\n", emp[maxIndex].name);
    printf("Employee ID: %d\n", emp[maxIndex].employeeID);
    printf("Salary: %.2f\n", emp[maxIndex].salary);
    return 0;
}