//Write a program to print first N terms of Fibonacci seriesSolution
//Author : Priyanshu Kumar Sinha // Date : 25 Aug 2022

#include<stdio.h>

void printFibonacci(int);

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    printf(" 1 "); //1st term of fibonacci series
    printFibonacci(n-1); // remaining n-1 terms
    
    printf("\n");

    return 0;
}

int prev1 = 0;
int prev2 = 1;

void printFibonacci(int n) 
{
    int term = prev1+prev2; 

    printf(" %d ", term);

    prev1 = prev2; 
    prev2 = term; 

    n--; 

    if (n>0)
        printFibonacci(n);
    
}