/*
 Find area of Triangle Formula : A = 1/2 × b × h
 */
 
 #include <stdio.h>

int main() {
    float b, h, a;

    printf("Enter the b of the triangle: ");
    scanf("%f", &b);

    printf("Enter the h of the triangle: ");
    scanf("%f", &h);

    a = 0.5 * b * h;

    printf("The a of the triangle is: %.2f\n", a);

    return 0;
}

