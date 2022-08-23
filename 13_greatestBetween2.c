//greatest Number between two
#include<stdio.h>

int greaterNumber(int, int);

int main()
{
    int num1, num2;
    printf("Enter two Number : ");
    scanf("%d %d",&num1, &num2);
    
    // result 
    printf("Greater number among %d and %d is %d", num1, num2, greaterNumber(num1,num2));
    printf("\n");

    return 0;
}

int greaterNumber(int x, int y)
{
    if (x>y)
        return x;
    return y;
}