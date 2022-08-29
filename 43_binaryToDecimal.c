//Write a program to convert a binary number to decimal number
//Author : Priyanshu Kumar Sinha // Date : 25 Aug 2022

#include<stdio.h>
#include "30_exponent.c"

int binToDec(long int);

int main()
{
    //this program can only be used if binary is less than 00000011 11111111 (i.e 0 to 1023)
    //since we are storing binary in int

    //but with long int it can go upto 00000111 11111111 11111111 (i.e 524287)
    long int binary;
    extern int dec;
    printf("Enter binary number : ");
    scanf("%ld", &binary);

    // binToDec(binary);
    printf("Decimal value of %ld is %d\n", binary, binToDec(binary));

    return 0;
}

int dec=0;
int i=0;

int binToDec(long int b)
{
    //get last digit
    int last = b%10;

    //put it to the power of 2
    dec = dec + calcPower(2*last, i);

    //change b i.e b/10
    b=b/10;
    i++;

    if(b>0)
        binToDec(b);
    else 
        return dec;
}