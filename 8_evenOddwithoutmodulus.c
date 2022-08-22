// even odd without modulus

#include<stdio.h>

//function declaration
int isEvenOdd(int);

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    //result
    if(isEvenOdd(num))
        printf("%d is even\n", num);
    else
        printf("%d is odd\n",num);
}

//function definition
int isEvenOdd(int x)
{
    //2 = 0010
    //3 = 0011
    //4 = 0100
    //5 = 0101
    //29 = 11101 
    //28 = 11100

    //we can see all even numbers end with 0 but odd numbers end with 1
    //to compare this we can use bitwise operator

    if (x&1)
        return 0;
    return 1;
}