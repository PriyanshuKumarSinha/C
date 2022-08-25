//Write a program to check whether a given number is prime or not
//Author : Priyanshu Kumar Sinha // Date : 25 Aug 2022

#include<stdio.h>

int isPrime(int);

// int main()
// {
//     int num;
//     printf("Enter a Number : ");
//     scanf("%d", &num);

//     if(isPrime(num))
//         printf("%d is a Prime Number", num);
//     else    
//         printf("%d is not a Prime Number", num);

//     printf("\n");
//     return 0;
// }


int n=2; //start checking factors from 2 since 1 will always be a factor

int isPrime(int x)
{
    if(x==1)
        return 0;   // since 1 is not a prime number
    
    if(n<x)
    {
        // if there is any other factor of x other than 1 or x then it is not a prime number (return 0 else 1).
         if(x%n == 0)
            return 0;
    }
    else    
        {
            n=2;
            return 1; 
        }
    n++;
    isPrime(x);
}