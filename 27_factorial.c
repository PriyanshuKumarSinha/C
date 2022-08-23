//Write a program to calculate factorial of a number

#include<stdio.h>

int calcFactorial(int);

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Factorial of %d is %d\n",num, calcFactorial(num));

    return 0;
}

//5! = 5*4*3*2*1
int calcFactorial(int x)
{
    if (x>1)
        return x * calcFactorial(x-1);
    return 1;
}