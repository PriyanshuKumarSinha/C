// Write a program to calculate sum of first N even natural numbers

// print first 10 even natural numbers with recursion

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
        return ((2*x)+sumNnumbers(x-1));
    return 2*1;
}