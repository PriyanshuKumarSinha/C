// print first n even natural number 

#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter a number : ");
    scanf("%d",&n);

    //print n, n-1, ... , 3, 2, 1
    for (i=2;i<=2*n;i=i+2)
        printf("%d ",i);

    printf("\n");

    return 0;
}