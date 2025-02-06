#include<stdio.h>
void main(){
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if(ch >= 'a' && ch <= 'z')
        printf("The entered character is a lowercase letter\n");
    else if(ch >= 'A' && ch <= 'Z')
        printf("The entered character is an uppercase letter\n");
    else
        printf("The entered character is not a letter\n");
    
   
}
