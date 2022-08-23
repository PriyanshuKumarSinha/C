//Write a program to reverse a numberSolution
//Author : Priyanshu Kumar Sinha // Date : 23 Aug 2022

#include<stdio.h>

int revNum(int);

int main()
{
    extern int number;
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    revNum(num);
    printf("Reverse : %d\n",number);

    return 0;
}

int number=0;

int revNum(int n)
{
    number = number *10 + n%10;
    if(n%10!=n)
        revNum(n/10);
}
