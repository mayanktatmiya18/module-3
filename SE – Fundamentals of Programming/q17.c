/*
Calculate person’s insurance premium based on salary
*/


#include <stdio.h>
int main() {
    double salary;
    double premium;
    double premiumRate = 0.05;

    printf("Enter the salary: ");
    scanf("%lf", &salary);

    premium = salary * premiumRate;

    printf("The insurance premium is: %.2f\n", premium);

    return 0;
}

