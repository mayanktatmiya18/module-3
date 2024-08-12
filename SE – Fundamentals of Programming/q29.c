/*
Convert minutes into seconds and hours
*/

#include <stdio.h>

int main() {
    int minutes;
    int seconds;
    float hours;
    
    printf("Enter number of minutes: ");
    scanf("%d", &minutes);
    
    seconds = minutes * 60;
    
    hours = minutes / 60.0;
    
    printf("Total seconds: %d\n", seconds);
    printf("Total hours: %.2f\n", hours);
    
    return 0;
}

