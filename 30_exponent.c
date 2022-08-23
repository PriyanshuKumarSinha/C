//Write a program to calculate x power y.(when user input x is 2 and y is 3 then the result will be 8)

#include<stdio.h>

int calcPower(int, int);

int main()
{
    int x,y;
    printf("Enter two numbers x and y as (x power y) : ");
    scanf("%d %d", &x,&y);
    printf("%d to the power %d is %d\n",x,y,calcPower(x,y));

    return 0;
}

int calcPower(int x, int y)
{
    if(y>1)
        return x * calcPower(x, y-1); //recursion y times
    return x;
}