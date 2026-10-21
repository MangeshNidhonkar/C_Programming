/*
    Author : Mangesh Vinod Nidhonkar    
    Date : 21/10/2026
*/
/*
    Problem Statement : Accept one character from user and convert case of that character.
    Input : a
    Output : A
*/

#include<stdio.h>
#include<stdlib.h>

int ConvertCase(char ch) {
    if((ch >= 'A') && (ch <= 'Z')) {
        return ch + 32; // Convert uppercase to lowercase
    } else if((ch >= 'a') && (ch <= 'z')) {
        return ch - 32; // Convert lowercase to uppercase
    } else {
        return ch; // Non-alphabetic characters remain unchanged
    }
}

int main() {
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter the Character : \n");
    scanf("%c",&cValue);

    cRet = ConvertCase(cValue);
    printf("Converted Character is : %c\n",cRet);

    return EXIT_SUCCESS;
}