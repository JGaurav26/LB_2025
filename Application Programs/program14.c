// Calculate the percentahe of students makrks

#include<stdio.h>

float calculatePercentage(int iMarks, int iTotal)
{
   
    float fPercentage = 0.0f;
    fPercentage = ((float)iMarks / iTotal) * 100.0f; // calculate percentage
    return fPercentage; // return percentage   
    if (iMarks > iTotal)
    {
        printf("Invalid input: Marks cannot be greater than total marks.\n");
        return fPercentage; // return -1 to indicate error
    }

    if(iMarks < 0 || iTotal <= 0)
{
    printf("Invalid input: Marks and total marks must be positive.\n");
    return fPercentage; // return -1 to indicate error
}
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

