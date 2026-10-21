/*
    Author : Mangesh Vinod Nidhonkar    
    Date : 21/10/2026
*/
/*
    Problem Statement : Write a program which accept one number from user and print even factors of that number.
    Input : 24
    Output : 1 2 4 6 8 12 
*/

#include<stdio.h>
#include<stdlib.h>  

void DisplayFactor(int iNo){
    int i = 0;

    // Filter to handle negative numbers (converts to positive)
    if(iNo <= 0){
        iNo = -iNo;
    }

    // Loop to iterate through possible factors
    for(i = 1; i <= iNo / 2; i++){
        if((iNo % i) == 0)
        {
            printf("%d\t", i);
        }
    }
}

int main() {
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
    return EXIT_SUCCESS;
}