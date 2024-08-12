/*
Calculate person’s Annual salary
*/

#include <stdio.h>

int main() {
    double monthlySalary;
    double annualSalary;

    printf("Enter the monthly salary: ");
    scanf("%lf", &monthlySalary);

    annualSalary = monthlySalary * 12;

    printf("The annual salary is: %.2f\n", annualSalary);

    return 0;
}

