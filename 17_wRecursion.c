// print your name 5 times with recursion

#include <stdio.h>

//function declaration
void printName(char [], int);

int main()
{
    char name[20]= "Priyanshu"; 
    int n=5; //n = no. of times
    printName(name,n); //function to print name n times

    return 0;
}

//function definition
void printName(char name[20], int n)
{
    printf("%s\n",name);
    if (n!=1) //recursion stops at n=1 after printing name n times
    {
        printName(name,n-1); //function calls itself again till n=1
    }
}