/*
    Author : Mangesh Vinod Nidhonkar    
    Date : 22/10/2026
*/
/*
    Problem Statement : Accept three integers and determine the greatest number among them. The program must also work correctly if two or all three numbers are equal.
    Input : 10  50  30  --> Output : 50 is Greatest
    Input : 40  40  20  --> Output : 40 is Greatest
    Input : 15  15  15  --> Output : 15 is Greatest
*/

#include<stdio.h>
#include<stdlib.h>

void CheckGreater(int iNo1, int iNo2, int iNo3) {
    if((iNo1 >= iNo2) && (iNo1 >= iNo3)) {
        printf("%d is Greatest\n", iNo1);
    } else if((iNo2 >= iNo1) && (iNo2 >= iNo3)) {
        printf("%d is Greatest\n", iNo2);
    } else {
        printf("%d is Greatest\n", iNo3);
    }
}

int main(){
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers : \n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    CheckGreater(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}