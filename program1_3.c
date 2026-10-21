/*
    Problem Statement : Program to print 5 to 1 numbers on screen
    Author : Mangesh Vinod Nidhonkar    
    Date : 21/10/2026
*/

#include<stdio.h>
#include<stdlib.h>

void Display() {
    int iCnt = 5;
    do {
        printf("%d\n",iCnt);
        iCnt--;
    } while(iCnt >= 1);
}

int main() {
    int iValue = 0;

    Display();
    return EXIT_SUCCESS;
}