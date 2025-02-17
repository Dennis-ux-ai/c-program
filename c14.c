#include <stdio.h>

int main() {
    char ch;
    
    // Taking input from the user
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // Checking the category of the character
    if (ch >= 65 && ch <= 90) {
        printf("The character '%c' is a Capital Letter.\n", ch);
    } 
    else if (ch >= 97 && ch <= 122) {
        printf("The character '%c' is a Small Letter.\n", ch);
    } 
    else if (ch >= 48 && ch <= 57) {
        printf("The character '%c' is a Digit.\n", ch);
    } 
    else if ((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || 
             (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127)) {
        printf("The character '%c' is a Special Symbol.\n", ch);
    } 
    else {
        printf("Invalid Input.\n");
    }

    return 0;
}
