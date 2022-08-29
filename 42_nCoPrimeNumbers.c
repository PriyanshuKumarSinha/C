//Write a program to print N co-prime numbers
//Author : Priyanshu Kumar Sinha // Date : 25 Aug 2022

#include<stdio.h>
#include "41_coPrimeNumbers.c"

void printNCoPrimes(int);

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    printNCoPrimes(n);

    printf("\n");
    return 0;
}

//starting search from (2,2) since (1, anything) will always be coprime
int i=2;
int j=2;

//no of co-prime numbers requested = num
//no of co-prime numbers given = terms
int terms=0;

void printNCoPrimes(int num)
{
    if(isCoPrime(i,j))
    {
        printf("(%d, %d) ", i,j); //if coprime print
        terms++; //increase no. of co-prime numbers given
    }

    j++;

    //if user gives input as 5 give output where  i and j both are less than or equal to 5
    if(j>num)
    {
        j=3;
        i++;
    }

    //recusion
    if (terms<num)
        printNCoPrimes(num);
}
