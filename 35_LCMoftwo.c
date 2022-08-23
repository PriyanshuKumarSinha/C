//Write a program to calculate LCM of two numbers
//Author : Priyanshu Kumar Sinha // Date : 23 Aug 2022

#include <stdio.h>

int LCM(int, int);

int main()
{
    int num1, num2;
    printf("Enter two Numbers : ");
    scanf("%d%d", &num1, &num2);

    printf("LCM of %d and %d is %d\n", num1, num2, LCM(num1,num2));

    return 0;
}

int n =2;

int LCM(int x, int y)
{
    extern int n;
    if(n%x ==0 && n%y ==0) //LCM of x and y should be divisible by both of them
        return n;
    n++; //check for all n>1
    LCM(x,y);
}
