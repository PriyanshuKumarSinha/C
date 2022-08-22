// even odd with modulus

#include<stdio.h>

//function declaration
int isEven(int);

int main()
{
    int num; 
    printf("Enter a number : ");
    scanf("%d", &num);

    //result
    if(isEven(num))
        printf("%d is even", num);
    else
        printf("%d is odd", num);
    printf("\n");
}

//function definition
int isEven(int x)
{
    if (x%2==0)
        return 1;
    return 0;
}