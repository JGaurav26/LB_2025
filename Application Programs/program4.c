// Problem Statement - Accept two integers and perform their addition

#include<stdio.h>

int iAddition(int iNo1, int iNo2)
{
    int iSum = 0; // variable to store sum of two numbers
    iSum = iNo1 + iNo2;
    return iSum;
}

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