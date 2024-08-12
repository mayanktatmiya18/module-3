/*. Display This Information using printf
a. Your Name
b. Your Birth date
c. Your Age
d. Your Address  */

#include <stdio.h>

int main() {
    char name[] = "mayank";          
    char birthDate[] = "";  
    int age = 34;                     
    char address[] = "1234 Elm Street, Anytown, USA";  

    printf("Name: %s\n", name);
    printf("Birth Date: %s\n", birthDate);
    printf("Age: %d\n", age);
    printf("Address: %s\n", address);

    return 0;
}

