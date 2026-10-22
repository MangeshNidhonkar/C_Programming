/*
    Author : Mangesh Vinod Nidhonkar    
    Date : 22/10/2026
*/
/*
    Problem Statement : A student is eligible for admission if the student's marks are at least 60 and age is at least 17 years. Accept both values and determine eligibility. Negative age or marks outside 0 - 100 must be trated as invalid input.

	Input : 75  18		output --> Eligible for admission
	Input : 55  19		output --> Not Eligible
	Input : 80  16		output --> Not Eligible
*/

#include<stdio.h>
#include<stdlib.h>

void CheckEligibility(float fMarks, int iAge) {
    if(fMarks < 0 || fMarks > 100 || iAge < 0) {
        printf("Invalid Input.\n");
    } else if(fMarks >= 60 && iAge >= 17) {
        printf("Eligible for admission.\n");
    } else {
        printf("Not Eligible for admission.\n");
    }
}

int main() {
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter the Marks and Age of the Student : \n");
    scanf("%f %d", &fMarks, &iAge);

    CheckEligibility(fMarks, iAge);

    return EXIT_SUCCESS;
}