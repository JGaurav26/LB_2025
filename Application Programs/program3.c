// Problem Statement - Accept two integers and perform their addition

#include<stdio.h>
int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iAns = 0;
    printf("Enter first number\n");
    scanf("%d",&iValue1);
    printf("Enter second number\n");
    scanf("%d",&iValue2);
    
    iAns = iValue1 + iValue2;
    printf("Sum of %d and %d is %d\n",iValue1,iValue2,iAns);
    return 0;
}