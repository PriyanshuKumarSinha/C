//swap two numbers (using function)

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
    int z = *p1; // put value of num1 (*p1) in z;
    *p1 = *p2; // put value of num2 (*p2) in num1 (*p1);
    *p2 = z; // and lastly put value of z (i.e value of num1) in num2;
}