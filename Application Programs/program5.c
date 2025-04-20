// Problem Statement - Accept two integers and perform their addition

#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////
// Function Name : iAddition
// Description   : Accept two integers and perform their addition
// Input Arguments        : int, int
// Return Value : int
// Author Name   : Gaurav Makrand Jadhav (Employee ID : 103)
// Date          : 13th April 2025
/////////////////////////////////////////////////////////////////////////////
int iAddition(int iNo1, int iNo2)
{
    int iSum = 0; // variable to store sum of two numbers
    iSum = iNo1 + iNo2;
    return iSum;
}

/// @brief /////////////// Function Name : main
/// @brief /////////////// Description   : Accept two integers and perform their addition
/// @return Integer value ///
int main()
{
    auto int iValue1 = 0;   // variable to store first number
    auto int iValue2 = 0;   // variable to store second number
    auto int iAns = 0;      // variable to store result of addition
    printf("Enter first number\n");
    scanf("%d",&iValue1);
    printf("Enter second number\n");
    scanf("%d",&iValue2);
    
    iAns = iAddition(iValue1, iValue2);  // function call to perform addition(iAddition)
    printf("Sum of %d and %d is %d\n",iValue1,iValue2,iAns);
    return 0;
}

// <---------------Test Cases:------------>
// Test Case 1 ::
// Input : 10 20
// Output : Sum of 10 and 20 is 30  
// Test Pass/Fail : Pass

// Test Case 2 ::
// Input : 0 11 
// Output : Sum of 0 and 11 is 11
// Test Pass/Fail : Pass

// Test Case 3 ::
// Input : 12 -6    
// Output : Sum of 12 and -6 is 6
// Test Pass/Fail : Pass

// Test Case 4 ::
// Input : -5 -6
// Output : Sum of -5 and -6 is -11
// Test Pass/Fail : Pass

// Test Case 5 ::
// Input : -15 -6
// Output : Sum of -15 and -6 is -21
// Test Pass/Fail : Pass

// Test Case 6 ::
// Input : -15 6
// Output : Sum of -15 and 6 is -9
// Test Pass/Fail : Pass

// Test Case 7 ::
// Input : 0 0
// Output : Sum of 0 and 0 is 0     
// Test Pass/Fail : Pass

// Test Case 8 ::
// Input : 10.25 10.25
// Output : Sum of 10.25 and 10.25 is 20.50 
// Test Pass/Fail : Fail

