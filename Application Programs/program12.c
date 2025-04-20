// Calculate the percentahe of students makrks

#include<stdio.h>

float calculatePercentage(int iMarks, int iTotal)
{
    float fPercentage = 0.0f;
    fPercentage = ((float)iMarks / iTotal) * 100.0f; // calculate percentage
    return fPercentage; // return percentage   
}    

int main()
{
    int iMarks = 0;
    int iTotal = 0;
    float fAns = 0;
    printf("Enter marks obtained by student\n");
    scanf("%d",&iMarks); // accept marks from user
    printf("Enter total marks\n");  
    scanf("%d",&iTotal); // accept total marks from user

    fAns = calculatePercentage(iMarks, iTotal); // function call to calculate percentage
    printf("Percentage of student is : %.2f\n",fAns); // display percentage of student

    return 0;
}

//TestCase
// Input : 500 200
// Output : Percentage of student is : 250.00
// Result : Fail