//check if given no. is divisible by 5
//this program can be used to check divisibility of any number by any number

#include <stdio.h>

int ifDivisible(int, int);

int main()
{
    int divisor = 5, dividend;
    printf("Enter a number : ");
    scanf("%d",&dividend);
    if (ifDivisible(divisor,dividend))
        printf("%d is divisible by %d", dividend, divisor);
    else
        printf("%d is not divisible by %d", dividend, divisor);

    printf("\n");

    return 0;
}

int ifDivisible(int divisor, int dividend){
    if (dividend%divisor ==0)
        return(1);
    return 0;
}