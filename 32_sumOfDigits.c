//Write a program to calculate sum of the digits of a given number
//Author : Priyanshu Kumar Sinha // Date : 23 Aug 2022

#include <stdio.h>

int sumOfDigits(int);
int calcPower(int, int);
int noOfDigits(int);

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    printf("Sum of digits of %d is %d\n", n, sumOfDigits(n));
    return 0;
}


int sumOfDigits(int n)
{
    //ex : 532
    //532%10=2  //532/10=53
    //53%10=3    //53/10=5
    //5%10=5  
    if(n%10!=n)
        return n%10+sumOfDigits(n/10);
    return n;
}

