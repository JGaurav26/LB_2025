// Problem Statement - Accept two integers and perform their addition

#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Enter first number\n");
    scanf("%d",&i);
    printf("Enter second number\n");
    scanf("%d",&j);
    
    k=i+j;
    printf("Sum of %d and %d is %d\n",i,j,k);
    return 0;
}