//swap two numbers (using function) w/o using third variable

#include <stdio.h>

//function declaration 
void swap(int *, int *);

int main()
{
    int num1,num2;
    printf("Enter two Numbers (first num1 then num 2): ");
    scanf("%d %d", &num1, &num2);

    //function call
    swap(&num1,&num2); //firstly we will pass their address so that we can access them with pointers
    printf("num1 = %d \nnum2 = %d\n", num1, num2);

    return 0;
}

//function definition
void swap(int *p1, int *p2)
{
    //logic
    // num1 = num1 + num2;
    // num2 = num1 - num2; // num2 = num1 + num2 - num2 = num1
    // num1 = num1 - num2; //num1 = num1 + num2 - num1 = num2

    *p1 = *p1 + *p2;
    *p2 = *p1 -  *p2;
    *p1=*p1 - *p2;
}