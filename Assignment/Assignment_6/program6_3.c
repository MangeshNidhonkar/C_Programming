/*
    Author : Mangesh Vinod Nidhonkar    
    Date : 22/10/2026
*/
/*
    Problem Statement : Accept the total purchase amount and calculate the final payable amount after applying the following discount. Negative purchase amounts are invalid.

    -----------------------------------------
        Purchase Amount		    Discount
    -----------------------------------------
        Below 1000		        0%
        1000 to below 5000	    10%
        5000 and above 		    20%

    Input : 800	    Output : Payable Amount = 800.0
    Input : 2000	Output : Payable Amount = 1800.0
    Input : 6000	Output : Payable Amount = 4800.0
*/    

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fPurchaseAmount) {
    float fFinalAmount = 0.0f;

    if(fPurchaseAmount < 0) {
        printf("Invalid Purchase Amount.\n");
        return;
    }

    if(fPurchaseAmount < 1000) {
        fFinalAmount = fPurchaseAmount;
    } else if(fPurchaseAmount < 5000) {
        fFinalAmount = fPurchaseAmount - (fPurchaseAmount * 0.10f);
    } else {
        fFinalAmount = fPurchaseAmount - (fPurchaseAmount * 0.20f);
    }

    printf("Final Payable Amount: %.2f\n", fFinalAmount);
}

int main() {
    float fPurchaseAmount = 0.0f;

    printf("Enter the Total Purchase Amount : \n");
    scanf("%f", &fPurchaseAmount);

    CalculateDiscount(fPurchaseAmount);

    return EXIT_SUCCESS;
}