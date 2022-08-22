// print first n natural number reverse

#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter a number : ");
    scanf("%d",&n);

    //print n, n-1, ... , 3, 2, 1
    for (i=n;i>0;i--)
        printf("%d ",i);

    printf("\n");

    return 0;
}