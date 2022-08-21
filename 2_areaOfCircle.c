//write a program to calculate area of a circle
#include <stdio.h>

#define PI 3.14 //pre processor command

float areaOfCircle(int); //function declaration

int main()
{
    int r; //radius of circle
    printf("Enter the lenth of radius of the circle : "); //message for user
    scanf("%d", &r); //input from user
    printf("Area of this circle is : %f unit square\n", areaOfCircle(r)); //result

    return 0; 
}

float areaOfCircle(int r) //function to calculate area
{
    return PI*r*r; 
}