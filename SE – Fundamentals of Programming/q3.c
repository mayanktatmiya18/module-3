/*
WAP to Find Area And Circumference of Circle
*/

#include <stdio.h>
#include <math.h> 

int main() {
    float radius;
    float area, circumference;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    area = M_PI * radius * radius;
    circumference = 2 * M_PI * radius;
    
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);
    
    return 0;
}

