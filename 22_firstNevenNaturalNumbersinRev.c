// print first n even natural number in reverse

#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter a number : ");
    scanf("%d",&n);

    //result
    for (i=2*n;i>=2;i=i-2)
        printf("%d ",i);

    printf("\n");

    return 0;
}