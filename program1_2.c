/*
    Problem Statement : Program to print 5 times "Marvellous" on screen
    Author : Mangesh Vinod Nidhonkar    
    Date : 21/10/2026
*/

#include<stdio.h>
#include<stdlib.h>

void Display() {
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++) {
        printf("Marvellous...\n");
    }
}

int main() {
    int iValue = 0;

    Display();
    return EXIT_SUCCESS;
}