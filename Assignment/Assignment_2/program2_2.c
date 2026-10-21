/*
    Problem Statement : Accept one number from user and print that number of "*" on screen
    Author : Mangesh Vinod Nidhonkar    
    Date : 21/10/2026
*/

#include<stdio.h>
#include<stdlib.h>  

void Display(int iNo) {
    int iCnt = 0;
    while(iCnt < iNo) {
        printf("*\n");
        iCnt++;
    }
}

int main() {
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    Display(iValue);
    return EXIT_SUCCESS;
}