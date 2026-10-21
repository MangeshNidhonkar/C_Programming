/*
    Problem Statement : Accept 1 number and check whether it is divisible by 5 or not
    Author : Mangesh Vinod Nidhonkar    
    Date : 21/10/2026
*/

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0 

int CheckDivisible(int iNo) {
    if((iNo % 5) == 0) {
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

    bRet = CheckDivisible(iValue);
    if(bRet == TRUE) {
        printf("Number is divisible by 5\n");
    } else {
        printf("Number is not divisible by 5\n");
    }

    return EXIT_SUCCESS;
}