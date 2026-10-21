#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Division
// Input            :   Integer, Integer
// Output           :   Integer
// Description      :   Perform Division
// Date             :   21/10/2026
// Author           :   Mangesh Vinod Nidhonkar
// 
//////////////////////////////////////////////////////////////////////////////////////

int Division( int iNo1, int iNo2)      
{
    int iAns = 0;

    iAns = iNo1 / iNo2;     // Business Logic

    return iAns;
}

//////////////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point of Application
//
//////////////////////////////////////////////////////////////////////////////////////

int main(){

    int iValue1 = 0, iValue2 = 0, iResult = 0;
    
    printf("Enter first Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);
    
    iResult = Division(iValue1,iValue2);
    
    printf("Division is : %d\n",iResult);
    
    return EXIT_SUCCESS; 
}