/*
Accept 5 employees name and salary and count average and total salary
*/
#include <stdio.h>

#define NUM_EMPLOYEES 5

int main() {
    char names[NUM_EMPLOYEES][100];
    double salaries[NUM_EMPLOYEES]; 
    double totalSalary = 0.0;
    double averageSalary;
    int i;

    for (i = 0; i < NUM_EMPLOYEES; i++) {
        printf("Enter the name of employee %d: ", i + 1);
        scanf(" %[^\n]", names[i]); 
        printf("Enter the salary of %s: ", names[i]);
        scanf("%lf", &salaries[i]);
    }

    for (i = 0; i < NUM_EMPLOYEES; i++) {
        totalSalary += salaries[i];
    }

    averageSalary = totalSalary / NUM_EMPLOYEES;

    printf("\nEmployee Details:\n");
    for (i = 0; i < NUM_EMPLOYEES; i++) {
        printf("Name: %s, Salary: %.2f\n", names[i], salaries[i]);
    }
    printf("\nTotal Salary: %.2f\n", totalSalary);
    printf("Average Salary: %.2f\n", averageSalary);

    return 0;
}

