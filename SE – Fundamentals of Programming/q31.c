/*
.Convert kilometers into meters
*/

#include <stdio.h>

int main() {
    float kilometers, meters;
    
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);
    
    meters = kilometers * 1000;
    
    printf("Distance in meters: %.2f\n", meters);
    
    return 0;
}

