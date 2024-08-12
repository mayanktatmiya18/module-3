/*
.WAP to convert years into days and days into years
*/

#include <stdio.h>

int main() {
    int years, days;
    float convertedDays;
    float convertedYears;
    
    printf("Enter number of years: ");
    scanf("%d", &years);
    convertedDays = years * 365.25;  
    printf("%d years is approximately %.2f days.\n", years, convertedDays);
    
    printf("Enter number of days: ");
    scanf("%d", &days);
    convertedYears = days / 365.25; 
    printf("%d days is approximately %.2f years.\n", days, convertedYears);
    
    return 0;
}

