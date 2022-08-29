//Write a program to check co-prime number
//Author : Priyanshu Kumar Sinha // Date : 25 Aug 2022

#include<stdio.h>
#include "36_HCF.c"

int isCoPrime(int, int);

// int main()
// {
//     int num1, num2;
//     printf("Enter two Numbers : ");
//     scanf("%d %d", &num1, &num2);

//     if(isCoPrime(num1, num2))
//         printf("%d and %d are Co primes", num1,num2);
//     else
//         printf("%d and %d are not Co primes", num1,num2);

//     printf("\n");
//     return 0;
// }

int isCoPrime(int x, int y)
{
    if(HCF(x,y)==1)
        return 1;
    return 0;
}