/*
Convert country’s name in abbreviate form
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char country_name[100];  
    int i = 0;
    
    printf("Enter the country's name: ");
    fgets(country_name, sizeof(country_name), stdin);

    printf("The abbreviated form is: ");
    

    while (country_name[i] != '\0') {
       
        if (i == 0 || (country_name[i - 1] == ' ' || country_name[i - 1] == '\t')) {
            
            printf("%c", toupper(country_name[i]));
        }
        i++;
    }
    
    printf("\n");

    return 0;
}

