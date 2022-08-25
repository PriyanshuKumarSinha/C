//Write a program to print all prime numbers between two given numbersSolution
//Author : Priyanshu Kumar Sinha // Date : 25 Aug 2022

#include<stdio.h>
#include "37_primeNumber.c"
#include "6-xtra-swapTwoNumberFunction.c"

void printPrime(int, int);

int main()
{
    int num1, num2;
    printf("Enter two Numbers : ");
    scanf("%d %d", &num1, &num2);

    if (num2>num1)
        swap(&num1, &num2);    

    num2++; //since we want all prime number "between" num1 and num2

    printPrime(num1, num2);
    printf("\n");

    return 0;
}
//
void printPrime(int x, int y) 
{
    if (y==1)
        y++; //because its giving segmentation fault (core dumped) //to be debugged later 

    if(x>y) 
    {
        if(isPrime(y)) 
            printf(" %d ", y);
        y++; 
        printPrime(x,y);
    }
}