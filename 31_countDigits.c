//Write a program to count digits in a given number.

#include <stdio.h>

int noOfDigits(int);

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    printf("No of digits in %d is %d\n", n, noOfDigits(n));
    return 0;
}

int digits=0;

int noOfDigits(int n)
{
    extern int digits;
    digits++;
    if(n/10>0)
        noOfDigits(n/10);
    return digits;
}
