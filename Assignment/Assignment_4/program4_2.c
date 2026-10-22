/*
    Author : Mangesh Vinod Nidhonkar    
    Date : 22/10/2026
*/
/*
    Problem Statement : Accept an integer from user and determine whether it is even or odd.
    Input : 24
    Output : Even
    Input : 17
    Output : Odd
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo) {
    if((iNo % 2) == 0) {
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

    bRet = CheckEvenOdd(iValue);
    if(bRet == true) {
        printf("Number is Even.\n");
    } else {
        printf("Number is Odd.\n");
    }

    return EXIT_SUCCESS;
}