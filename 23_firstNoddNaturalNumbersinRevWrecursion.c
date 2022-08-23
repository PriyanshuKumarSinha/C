// print first n odd natural numbers with recursion in reverse

#include <stdio.h>

//function declaration
void printNnumbers(int);

int main()
{
    int n; //using local n

    printf("Enter a Number : ");
    scanf("%d", &n);
    printNnumbers(n); //function call
    
    printf("\n");
    return 0;
}

//function definition
void printNnumbers(int x)
{
    printf("%d ", 2*x-1); //a little change in logic  
    if(x>1)
        printNnumbers(x-1); //recursion
}