// print first n natural number

#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter a number : ");
    scanf("%d",&n);

    //print 1,2,3,....n 
    for (i=1;i<=n;i++)
        printf("%d ",i);

    printf("\n");

    return 0;
}