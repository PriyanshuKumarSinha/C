//Write a program to calculate HCF of two numbers.
//Author : Priyanshu Kumar Sinha // Date : 23 Aug 2022

#include <stdio.h>

int HCF(int, int);
void swap(int *, int *);

int main()
{
    int num1, num2;
    printf("Enter two Numbers : ");
    scanf("%d%d", &num1, &num2);

    //for HCF() to work num1 should be greater than num2; 
    if (num2>num1)
        swap(&num1, &num2);

    //for HCF 
    printf("HCF of %d and %d is %d\n", num1, num2, HCF(num1,num2));
    return 0;
}

int n=1; //start checking factors from 1
int hcf; //put common factors in hcf and return the highest one

int HCF(int x, int y) //x>y
{
    if(n<=y) //hcf of any two numbers would always be less than both of these numbers and since y<x therefore no need to compare any futhur
    {
        extern int n;
        if(x%n ==0 && y%n ==0) //checks for common factors
            hcf = n; //updates highest common factor
    }
    else
        return hcf; //and at last when all the factors have been checked it returns the highest common factor

    n++; //for checking another number if it is a common factor of  x and y
    HCF(x,y); //recursion
}

//copied from "6-xtra-swapTwoNumberFunction.c"
void swap(int *p1, int *p2)
{
    int z = *p1; // put value of num1 (*p1) in z;
    *p1 = *p2; // put value of num2 (*p2) in num1 (*p1);
    *p2 = z; // and lastly put value of z (i.e value of num1) in num2;
}