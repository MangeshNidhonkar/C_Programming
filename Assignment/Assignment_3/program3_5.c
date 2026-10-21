/*
    Author : Mangesh Vinod Nidhonkar    
    Date : 21/10/2026
*/
/*
    Problem Statement : Accept one character from user and check whether that character is vowel (a, e, i, o, u) or not.
    Input : a
    Output : True
    Input : d
    Output : False
*/

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char ch) {
    if((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U') ||
       (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u')) {
        return TRUE;
    } else {
        return FALSE;
    }
}

int main() {
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character : \n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);
    if(bRet == TRUE) {
        printf("Character is Vowel\n");
    } else {
        printf("Character is not Vowel\n");
    }

    return EXIT_SUCCESS;
}