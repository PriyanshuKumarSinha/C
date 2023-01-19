// pallindrome program
// Author : priyanshukumarsinha
// Date : 20 Jan 2023

#include<stdio.h>
int main()
{
    int n,m,res=0,i;
    printf("Enter  a Number : ");
    scanf("%d", &n);
    m=n;

    for(i=0; n>0; i++)
    {
        //extract last digit
        res = res * 10 + n%10;
        n=n/10;
    }
    if(m==res)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}