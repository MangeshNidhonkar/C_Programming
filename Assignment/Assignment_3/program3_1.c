/*
    Author : Mangesh Vinod Nidhonkar    
    Date : 21/10/2026
*/
/*
    Problem Statement : Write a program which accept one number from user and print that number of even numbers on screen
    Input : 7
    Output : 2 4 6 8 10 12 14  
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int iNo) {
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++) {
        printf("%d\n",iCnt*2);
    }
}

int main() {
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    DisplayEven(iValue);
    return EXIT_SUCCESS;
}