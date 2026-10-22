/*
    Author : Mangesh Vinod Nidhonkar    
    Date : 22/10/2026
*/
/*
    Problem Statement : C program that accepts an integer from user and determine whether the entered number is positive, negative or zero.
    Input : 15
    Output : Positive
    Input : -8
    Output : Negative
    Input : 0
    Output : Zero
*/

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo) {
    if(iNo > 0) {
        printf("Number is Positive\n");
    } else if(iNo < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }
}

int main() {
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}