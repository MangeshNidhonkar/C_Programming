/*
    Problem Statement : Accept number from user, and check whether number is even or odd.
    Author : Mangesh Vinod Nidhonkar    
    Date : 21/10/2026
*/

#include<stdio.h>
#include<stdlib.h> 
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEvenOdd(int iNo) {
    if((iNo % 2) == 0) {
        return TRUE;
    } else {
        return FALSE;
    }
}

int main() {
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);
    if(bRet == TRUE) {
        printf("Number is Even\n");
    } else {
        printf("Number is Odd\n");
    }

    return EXIT_SUCCESS;
}