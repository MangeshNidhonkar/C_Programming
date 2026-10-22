/*
    Author : Mangesh Vinod Nidhonkar    
    Date : 22/10/2026
*/
/*
    Problem Statement : Accept an integer and determine whether it is divisible by both 3 & 5, only 3, only 5, or neither.

    Input : 15	Output : --> Divisible by both
    Input : 9	Output : --> Divisible by 3 only
    Input : 10	Output : --> Divisible by 5 only
    Input : 7	Output : --> Not divisible by either 3 or 5
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iNo) {
    if(((iNo % 3) == 0) && ((iNo % 5) == 0)) {
        printf("%d is divisible by both 3 and 5.\n", iNo);
    } else if((iNo % 3) == 0) {
        printf("%d is divisible by 3 only.\n", iNo);
    } else if((iNo % 5) == 0) {
        printf("%d is divisible by 5 only.\n", iNo);
    } else {
        printf("%d is not divisible by either 3 or 5.\n", iNo);
    }
}

int main() {
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}