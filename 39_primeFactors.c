//Write a program to print all prime factors of a given number. For example prime factors of 36 are 2,2,3,3
//Author : Priyanshu Kumar Sinha // Date : 25 Aug 2022

#include<stdio.h>

void primeFactors(int);

int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d", &num);

    printf("Prime Factors of %d are : ",num);
    primeFactors(num);
    printf("\n");

    return 0;
}

int n=2; //start checking factors from 2

void primeFactors(int x)
{
    if(x%n==0) //check if it is a factor
    {
        x=x/n; 
        printf(" %d ", n); // print factor
    }
    else
        n++; 

    if (x/n >=1)
        primeFactors(x);
}
