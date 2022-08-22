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
    //if x/2 *2 = x then x must be even
    // 2/2*2 = 2
    //but 3/2*2 = 1 * 2 = 2 and hence odd

    if (x/2 *2 ==x)
        return 1;
    return 0; 
}