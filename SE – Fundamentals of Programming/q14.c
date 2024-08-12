/*
Find ascii value of given number
*/

#include <stdio.h>

int main() {
    char character;
    int ascii_value;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &character);

    // Convert the character to its ASCII value
    ascii_value = (int)character;

    // Output the result
    printf("The ASCII value of '%c' is: %d\n", character, ascii_value);

    return 0;
}

