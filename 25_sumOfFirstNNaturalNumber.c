//sum of first n natural numbers

#include<stdio.h>

int sumN(int);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Sum of first %d Natural Numbers is %d\n", n, sumN(n));

    return 0;
}

int sumN(int x)
{
    if(x>1)
        return x + sumN(x-1);
    return x;
}