/*
Find circumference of Triangle formula : triangle = a + b + c
*/

#include <stdio.h>

int main() {
    float a, b, c, circumference;

    printf("Enter the length of side a: ");
    scanf("%f", &a);

    printf("Enter the length of side b: ");
    scanf("%f", &b);

    printf("Enter the length of side c: ");
    scanf("%f", &c);

    circumference = a + b + c;

    printf("The circumference (perimeter) of the triangle is: %.2f\n", circumference);

    return 0;
}

