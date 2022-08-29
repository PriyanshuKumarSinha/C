//Program to print first n positive numbers with two bits set
//Author : Priyanshu Kumar Sinha // Date : 25 Aug 2022

//has limitation of 153 
//if n>3 we might have to use long int 

#include<stdio.h>

void printNNowithtwoBitsSet(int);
void ifTwoBitsSet(int);


int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    printNNowithtwoBitsSet(n);

    printf("\n");
    return 0;
}

int bitsSet = 0;
int i = 1;

void printNNowithtwoBitsSet(int n)
{
    ifTwoBitsSet(i);
    if (bitsSet==2)
    {
        printf("%d ", i);
        n--;
    }
    bitsSet = 0;
    i++;
    if (n>0)
        printNNowithtwoBitsSet(n);
}

void ifTwoBitsSet(int x){
    if(x%2 == 1)
        bitsSet++;
    x=x/2;
    if(x>0)
        ifTwoBitsSet(x);
}