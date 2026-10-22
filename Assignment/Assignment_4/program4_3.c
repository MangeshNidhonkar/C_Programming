/*
    Author : Mangesh Vinod Nidhonkar    
    Date : 22/10/2026
*/
/*
    Problem Statement : Accept two integers and determine which number is greater. If both numbers are equal, display an appropriate message.
    Input : 10  20  --> Output : 20 is Greater
    Input : 30  15  --> Output : 30 is Greater  
    Input : 25  25  --> Output : Both numbers are equal
*/

#include<stdio.h>
#include<stdlib.h>

void CheckGreater(int iNo1, int iNo2) {
    if(iNo1 > iNo2) {
        printf("%d is Greater\n", iNo1);
    } else if(iNo2 > iNo1) {
        printf("%d is Greater\n", iNo2);
    } else {
        printf("Both numbers are equal\n");
    }
}

int main(){
    int iValue1 = 0, iValue2 = 0;

    printf("Enter two numbers : \n");
    scanf("%d %d", &iValue1, &iValue2);

    CheckGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}