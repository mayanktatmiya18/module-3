/*
Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary
*/

#include <stdio.h>

int main() {
    double monthlySalary;
    double insurancePremium, loanInstallment, remainingSalary;

    printf("Enter the monthly salary: ");
    scanf("%lf", &monthlySalary);

    insurancePremium = monthlySalary * 0.10;

    loanInstallment = monthlySalary * 0.10;

    remainingSalary = monthlySalary - (insurancePremium + loanInstallment);

    printf("Insurance Premium: %.2f\n", insurancePremium);
    printf("Loan Installment: %.2f\n", loanInstallment);
    printf("Remaining Salary: %.2f\n", remainingSalary);

    return 0;
}

