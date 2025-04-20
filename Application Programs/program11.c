// PS - Accept the number from the use and  display even or odd number

#include<stdio.h>
#include<stdbool.h>
/// @brief
/// @brief /////////////// Function Name : checkEvenOrOdd
/// @brief /////////////// Description   : Accept number and check whether it is even or odd
/// @brief /////////////// Author Name   : Gaurav Makrand Jadhav (Employee ID : 103)
/// @brief /////////////// Date          : 20th April 2025
/// @param iNo
/// @return bool

bool ckeckEvenOrOdd(int number)
{
    if(number % 2 == 0)
    {
        return true; // number is even
    }
    else
    {
        return false; // number is odd
    }
}

int main()
{
    int iNo = 0;
    bool bRet = false; // variable to store return value of function
    printf("Enter number\n");
    scanf("%d",&iNo); // accept number from user    

    bRet = ckeckEvenOrOdd(iNo); // function call to check even or odd number
    
    if(bRet == true) // check if number is even
    {
        printf("%d is an even number\n",iNo); // display even number
    }
    else
    {
        printf("%d is an odd number\n",iNo); // display odd number
    }

    return 0;
}