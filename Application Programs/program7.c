// PS - Accept the radius fromt user and calculate the area of circle 

/* Step 1 : Understanding the Problem Statement
            Radiius : flaoat
            formula = 3.14 * radius * radius
            area = 3.14 * radius * radius
*/           


#include<stdio.h>
/// @brief 
/// @brief /////////////// Function Name : calculateArea
/// @brief /////////////// Description   : Accept radius and calculate area of circle
/// @brief /////////////// Author Name   : Gaurav Makrand Jadhav (Employee ID : 103)
/// @brief /////////////// Date          : 13th April 2025
/// @param radius 
/// @return float/
float calculateArea(float radius)
{
    auto float fAreaOfCurlcle = 0.0f; // variable to store area of circle
    auto float const PI = 3.14f; // constant value of PI
    fAreaOfCurlcle = PI * radius * radius; // formula to calculate area of circle
    return fAreaOfCurlcle; // return the calculated area
}

int main()
{
    auto float fRadius = 0.0f; // variable to store radius of circle
    auto float fArea = 0.0f; // variable to store area of circle
    printf("Enter radius of circle\n"); // prompt user to enter radius
    scanf("%f",&fRadius); // accept radius from user
    
    fArea = calculateArea(fRadius); // function call to calculate area of circle
    printf("Area of circle with radius %.2f is %.2f\n",fRadius,fArea); // display area of circle
    
    return 0;
}