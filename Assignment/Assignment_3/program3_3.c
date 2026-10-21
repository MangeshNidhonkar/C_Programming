/*
    Author : Mangesh Vinod Nidhonkar    
    Date : 21/10/2026
*/
/*
    Problem Statement : Write a program which accept one number from user and print even factors of that number.
    Input : 36
    Output : 2 4 6 12 18
*/

#include<stdio.h>
#include<stdlib.h>  

void DisplayEvenFactors(int iNo) {
    int iCnt = 0;
    if(iNo < 0) {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++) {
        if(((iNo % iCnt) == 0) && ((iCnt % 2) == 0)) {
            printf("%d \t",iCnt);
        }
    }
}

int main() {
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);
    return EXIT_SUCCESS;
}