//greatest Number between three
#include<stdio.h>

int greaterNumber(int, int, int);

int main()
{
    int num1, num2, num3;
    printf("Enter three Number : ");
    scanf("%d %d %d",&num1, &num2, &num3);
    
    // result 
    printf("Greater number among %d, %d and %d is %d", num1, num2, num3, greaterNumber(num1,num2, num3));
    printf("\n");

    return 0;
}

int greaterNumber(int x, int y, int z)
{
    if(x>y && x>z)
        return x; //x is greatest
    else //y or z is greater than x i.e greatest
        if (y>z) 
            return y;
        return z;
}