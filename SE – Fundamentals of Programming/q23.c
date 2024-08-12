/*
WAP to calculate swap 2 numbers with using of multiplication and division
*/

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    if (a != 0 && b != 0) { 
        a = a * b;  
        b = a / b;  
        a = a / b;   
    } else {
        printf("Error: One of the numbers is zero. Cannot swap using multiplication and division.\n");
        return 1;
    }

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

