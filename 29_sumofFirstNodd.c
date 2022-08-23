//Write a program to calculate sum of first N odd natural numbers

#include <stdio.h>

//function declaration
int sumNnumbers(int);


int main()
{
    int n; //using gloabl n

    printf("Enter a Number : ");
    scanf("%d", &n);
    printf("Sum of first %d even Natural Numbers is %d", n, sumNnumbers(n)); //function call
    
    printf("\n");
    return 0;
}

//function definition
int sumNnumbers(int x)
{
    if(x>1)
        return ((2*x-1)+sumNnumbers(x-1));
    return 1;
}