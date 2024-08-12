/*
.Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P

*/

#include <stdio.h>
#include <math.h> 

int main() {
    double principal, rate, amount, compoundInterest;
    int years;


    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the number of years: ");
    scanf("%d", &years);

    amount = principal * pow((1 + rate / 100), years);

    compoundInterest = amount - principal;

    printf("The amount after %d years is: %.2f\n", years, amount);
    printf("The compound interest earned is: %.2f\n", compoundInterest);

    return 0;
}

