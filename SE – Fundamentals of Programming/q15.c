/*
Convert school’s name in abbreviated form
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char school_name[100];  
    int i = 0;
    
    printf("Enter the school's name: ");
    fgets(school_name, sizeof(school_name), stdin);

    printf("The abbreviated form is: ");
   
    while (school_name[i] != '\0') {
       
        if (i == 0 || (school_name[i - 1] == ' ' || school_name[i - 1] == '\t')) {
           
            printf("%c", toupper(school_name[i]));
        }
        i++;
    }
    
    printf("\n");

    return 0;
}

