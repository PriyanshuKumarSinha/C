// print first 10 natural numbers with recursion

#include <stdio.h>

//function declaration
void printNnumbers(int);

int n; //no of turns //global variable

int main()
{
    extern int n; //using gloabl n

    printf("Enter a Number : ");
    scanf("%d", &n);
    printNnumbers(n); //function call
    
    printf("\n");
    return 0;
}

//function definition
void printNnumbers(int x)
{
    extern int n; //using global n
    printf("%d ", n-(x-1)); //if we just print value of n it will go like 25, 24, 23, ... but with this operation it will work as expected
    if(x>1)
        printNnumbers(x-1); //recursion
}