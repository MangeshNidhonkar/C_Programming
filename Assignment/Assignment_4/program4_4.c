/*
    Author : Mangesh Vinod Nidhonkar    
    Date : 22/10/2026
*/
/*
    Problem Statement : Accept the age of a person and determine whether that person is eligible to vote. 
                        A person must be at least 18 years old to vote. A negative age is considered invalid input.
    Input : 21
    Output : Person is eligible to vote.
    Input : 16
    Output : Person is not eligible to vote.
    Input : -5
    Output : Invalid age entered.
*/

#include<stdio.h>
#include<stdlib.h>

void checkVotingEligibility(int iAge) {
    if(iAge < 0) {
        printf("Invalid age entered.\n");
    } else if(iAge >= 18) {
        printf("Person is eligible to vote.\n");
    } else {
        printf("Person is not eligible to vote.\n");
    }
}

int main() {
    int iAge = 0;

    printf("Enter the age of the person : \n");
    scanf("%d", &iAge);

    checkVotingEligibility(iAge);

    return EXIT_SUCCESS;
}