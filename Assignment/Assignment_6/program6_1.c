/*
    Author : Mangesh Vinod Nidhonkar    
    Date : 22/10/2026
*/
/*
    Problem Statement : Accept the number of electricity units consumed and calculate the total bill using the following
		                slab-wise rates. Each slab rate applies only to units within that slab.

    --------------------------------------
    	Unit Consumed		Rate
	--------------------------------------
    	First 100 units		5 per unit
	    Next 100 Units		7 per unit
	    above 200 units		10 per unit

    Negative unit consumption is invalid.

    Input : 80	Output --> Bill = 400.00
    Input : 150	Output --> Bill = 850.00
    Input : 250	Output --> Bill = 1700.00
*/

#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits) {
    float fBill = 0.0f;

    if(iUnits < 0) {
        printf("Invalid Unit Consumption.\n");
        return;
    }

    if(iUnits <= 100) {
        fBill = iUnits * 5.0f;
    } else if(iUnits <= 200) {
        fBill = (100 * 5.0f) + ((iUnits - 100) * 7.0f);
    } else {
        fBill = (100 * 5.0f) + (100 * 7.0f) + ((iUnits - 200) * 10.0f);
    }

    printf("Total Electricity Bill: %.2f\n", fBill);
}

int main() {
    int iUnits = 0;

    printf("Enter the number of electricity units consumed: \n");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}