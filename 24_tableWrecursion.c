//print table of user's choice with recusion

#include<stdio.h>

void printTable(int, int);
int upto =10;

int main()
{
    int n;
    extern int upto;
    printf("Enter a Number : ");
    scanf("%d", &n);
    printTable(upto, n);

    return 0;
}

void printTable(int i, int n)
{
    extern int upto;
    int x = upto-i+1;
    printf("%d x %d = %d\n", n,x,n*x);
    if (i>1)
        printTable(i-1,n);
}