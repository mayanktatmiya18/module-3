/*
Find Area of Cube formula : a = 6a2
*/

#include <stdio.h>

int main() {
    float a, area;
    printf("Enter the length of the side of the cube: ");
    scanf("%f", &a);
    area = 6 * a * a;
    printf("The surface area of the cube is: %.2f\n", area);

    return 0;
}

