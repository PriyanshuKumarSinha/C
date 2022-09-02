// Star Pattern : 29
//Author : Priyanshu Kumar Sinha // Date : 2 Aug 2022

//____A
//___CB
//__FED
//_JIHG
//ONMLK

#include<stdio.h>

int main()
{
    int i,j,n=5,l=1,x;
    for(i=1; i<=n;i++)    
    {
        x=64+l;
        for (j=1;j<=n;j++)
        {
            if(j>n-i)
            {
                printf("%c",x);
                x--;
            }
            else
                printf(" ");
        }
        l+=i+1;
        printf("\n");        
    }
}