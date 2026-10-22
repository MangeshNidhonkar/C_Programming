/*
    Author : Mangesh Vinod Nidhonkar    
    Date : 22/10/2026
*/
/*
    Problem Statement : Accept a single character and determine whether it is an uppercase alphabet, lowercase alphabet,
		    digit or special character. Use character comparisons without using library character - classification functions.

    Input : A	Output : --> Uppercase Alphabet
    Input : m	Output : --> Lowercase Alphabet
    Input : 7	Output : --> Digit
    Input : @	Output : --> Special Character
*/

#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char ch) {
    if(ch >= 'A' && ch <= 'Z') {
        printf("%c is an Uppercase Alphabet.\n", ch);
    } else if(ch >= 'a' && ch <= 'z') {
        printf("%c is a Lowercase Alphabet.\n", ch);
    } else if(ch >= '0' && ch <= '9') {
        printf("%c is a Digit.\n", ch);
    } else {
        printf("%c is a Special Character.\n", ch);
    }
}

int main() {
    char cValue = '\0';

    printf("Enter a Character : \n");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}