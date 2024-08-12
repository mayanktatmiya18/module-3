/*
Convert years into days and months
*/

#include <stdio.h>

int main() {
    int years;
    int totalDays;
    float months;
    
    printf("Enter number of years: ");
    scanf("%d", &years);
    
    totalDays = years * 365.25;
    
    months = totalDays / 30.44;
    
    printf("Total days: %d\n", totalDays);
    printf("Approximate number of months: %.2f\n", months);
    
    return 0;
}

