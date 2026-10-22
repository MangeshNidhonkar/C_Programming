/*
    Author : Mangesh Vinod Nidhonkar    
    Date : 22/10/2026
*/
/*
    Problem Statement : Accept a year and determine whether it is a leap year according to Gregorian calendar rules. A year is a leap year if it is divisible by 400, or divisible by 4 but not by 100. 
                        Consider years less than or equal to zero invalid.

    Input : 2024	Output : -->	Leap Year
    Input :	1900	Output : -->	Not a Leap Year
    Input :	2000	Output : -->	Leap Year
*/

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear) {
    if(iYear <= 0) {
        printf("Invalid Year Entered.\n");
    } else if((iYear % 400) == 0 || ((iYear % 4) == 0 && (iYear % 100) != 0)) {
        printf("%d is a Leap Year.\n", iYear);
    } else {
        printf("%d is not a Leap Year.\n", iYear);
    }
}

int main() {
    int iYear = 0;

    printf("Enter the Year : \n");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}