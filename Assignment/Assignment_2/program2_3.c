/*
    Problem Statement : Accept one number from user, if number is less than 10 then print "Hello" otherwise print "Demo"
    Author : Mangesh Vinod Nidhonkar    
    Date : 21/10/2026
*/

#include<stdio.h>
#include<stdlib.h>

int CheckNumber(int iNo) {
    if(iNo < 10) {
        printf("Hello\n");
    } else {
        printf("Demo\n");
    }
}

int main() {
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    CheckNumber(iValue);
    
    return EXIT_SUCCESS;
}