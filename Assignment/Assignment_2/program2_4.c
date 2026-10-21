/*
    Problem Statement : Accept two numbers from user, and display first number in second number of times on screen
    Author : Mangesh Vinod Nidhonkar    
    Date : 21/10/2026
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo1, int iNo2) {
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo2; iCnt++) {
        printf("%d\n",iNo1);
    }
}

int main() {
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter the Second Number : \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);
    return EXIT_SUCCESS;
}