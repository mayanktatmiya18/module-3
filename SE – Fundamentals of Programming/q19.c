/*
Calculate compound interest
*/


    #include <stdio.h>
#include <math.h> 

int main() {
    double principal, rate, amount;
    int timesCompounded, years;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    rate = rate / 100;

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &timesCompounded);

    printf("Enter the number of years: ");
    scanf("%d", &years);

    amount = principal * pow((1 + rate / timesCompounded), (timesCompounded * years));

    printf("The amount after %d years is: %.2f\n", years, amount);

    return 0;
}

