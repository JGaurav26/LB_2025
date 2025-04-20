// PS - Accept the numbrer from the user and calculate the cube of the numcer
#include<stdio.h>

/// @brief
/// @brief /////////////// Function Name : calculateCube    
/// @brief /////////////// Description   : Accept number and calculate cube of number
/// @brief /////////////// Author Name   : Gaurav Makrand Jadhav (Employee ID : 103)
/// @brief /////////////// Date          : 20th April 2025
/// @param iNo
/// @return int/
long int calculateCube( long int iNo)
{
    long int iCube = 0; // variable to store cube of number
    iCube = iNo * iNo * iNo; // formula to calculate cube of number
    return iCube; // return the calculated cube
}

int main()
{
    long int iValue = 0;
    long int iCube = 0; 
    printf("Enter number\n");
    scanf("%d",&iValue); // accept number from user

    iCube = calculateCube(iValue); // function call to calculate cube of number
    printf("Cube of %d is %d\n",iValue,iCube); // display cube of number
    
    return 0; // return 0 to indicate successful execution of program
}

// <---------------Test Cases:------------>
// Test Case 1 :: number = 324453465476
// Output : Cube of 324453465476 is 341101098703658032
// Test Pass/Fail : Pass