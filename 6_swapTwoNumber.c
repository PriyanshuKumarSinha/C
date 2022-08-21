//swap two numbers (using third variable)

#include <stdio.h>

int main()
{
    int num1,num2,temp;
    printf("Enter two Numbers (first num1 then num 2): ");
    scanf("%d %d", &num1, &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("num1 = %d num2 = %d", num1, num2);

    return 0;
}

//we can use pointer to do it with function (NEXT) : 6-xtra-swapTwoNumberFunction.c