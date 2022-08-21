//write a program to add two numbers
#include <stdio.h>

int add(int, int); //function declaration

int main()//takes nothing returns something type function
{
    int a,b; //two numbers(to be added)
    printf("Enter two numbers : "); //message for the user
    scanf("%d%d", &a,&b); // inpur from user
    printf("Sum of %d and %d is %d\n", a, b, add(a,b)); // result  //can use a+b instead of add(a,b) //a and b are actual arguments
    return 0; // returns 0
}

//add function (x and y are formal arguments)
int add(int x, int y)
    {return x+y;} // same as a+b 
