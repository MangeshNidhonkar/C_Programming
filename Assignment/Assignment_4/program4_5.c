/*
    Author : Mangesh Vinod Nidhonkar    
    Date : 22/10/2026
*/
/*
    Problem Statement : Accept an integer and determine whether it is divisble by 5 without leaving any remainder.
    Input : 45
    Output : Number is divisible by 5.
    Input : 23
    Output : Number is not divisible by 5.
*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool CheckDivisibleByFive(int iNo) {
    if((iNo % 5) == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisibleByFive(iValue);
    if(bRet == true) {
        printf("Number is divisible by 5.\n");
    } else {
        printf("Number is not divisible by 5.\n");
    }

    return EXIT_SUCCESS;
}