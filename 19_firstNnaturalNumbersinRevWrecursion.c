// print first 10 natural numbers with recursion

#include <stdio.h>

//function declaration
void printNnumbers(int);

int main()
{
    int n; //local variable n

    printf("Enter a Number : ");
    scanf("%d", &n);
    printNnumbers(n); //function call
    
    printf("\n");
    return 0;
}

//function definition
void printNnumbers(int x)
{
    printf("%d ", x); //this time we can directly print x
    if(x>1)
        printNnumbers(x-1); //recursion
}