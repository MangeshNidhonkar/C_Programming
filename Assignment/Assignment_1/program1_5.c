/*
    Problem Statement : Accept 1 number from user and print that number of "*" on screen
    Author : Mangesh Vinod Nidhonkar    
    Date : 21/10/2026
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo) {
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++) {
        printf("*\n");
    }
}

int main() {
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    Display(iValue);
    return EXIT_SUCCESS;
}