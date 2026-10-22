/*
    Author : Mangesh Vinod Nidhonkar    
    Date : 22/10/2026
*/
/*
    Problem Statement : Accept three integer values representing the lengths of the sides of a triangle. Determine whether they can form a valid triangle. 
                        All sides must be positive, and the sum of any two sides must be greater than the third side.

	Input : 3  4  5		Output : Valid Triangle
	Input : 1  2  3		Output : Invalid Triangle
	Input : 0  4  5		Output : Invalid Triangle
*/

#include<stdio.h>
#include<stdlib.h>

void CheckTriangleValidity(int iSide1, int iSide2, int iSide3) {
    if(iSide1 <= 0 || iSide2 <= 0 || iSide3 <= 0) {
        printf("Invalid Triangle: All sides must be positive.\n");
        return;
    }

    if((iSide1 + iSide2 > iSide3) && (iSide1 + iSide3 > iSide2) && (iSide2 + iSide3 > iSide1)) {
        printf("Valid Triangle\n");
    } else {
        printf("Invalid Triangle\n");
    }
}

int main() {
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter the lengths of the three sides of the triangle: \n");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangleValidity(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}