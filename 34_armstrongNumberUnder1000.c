//Write a program to print all Armstrong numbers under 1000.
//Author : Priyanshu Kumar Sinha // Date : 23 Aug 2022

#include <stdio.h>

void armstrongNumber(int);
int sumofCubeofDigits(int);

int main()
{
    int num=1000;
    // printf("Enter a Number : ");
    // scanf("%d", &num);
    armstrongNumber(num);
    printf("\n");
    return 0;
}

//checks if the number is armstrong no. of not
// if yes, prints
// if no, checks for next number
// starts with 1000
void armstrongNumber(int n)
{
    if (n>0)
    {
        if(n==sumofCubeofDigits(n))
            printf(" %d ",n);
        armstrongNumber(n-1);   
    }
}

int sumofCubeofDigits(int x)
{
    int y = x%10; //for getting each digit
    if(x%10!=x)
        return y*y*y + sumofCubeofDigits(x/10); // and then calculating their cube here 
    return x*x*x;
}