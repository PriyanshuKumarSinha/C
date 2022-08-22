//product of first n natural numbers

#include<stdio.h>

int prodN(int);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Sum of first %d Natural Numbers is %d\n", n, prodN(n));

    return 0;
}

int prodN(int x)
{
    if(x>1)
        return x * prodN(x-1);
    return x;
}