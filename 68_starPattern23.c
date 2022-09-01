// Star Pattern : 23
//Author : Priyanshu Kumar Sinha // Date : 1 Aug 2022

// 1
// 10
// 101
// 1010
// 10101
// 101010

#include<stdio.h>

int main()
{
    int i,j,n=6,m=n,k;
    for(i=1; i<=n;i++)    
    {
        k=1;
        for (j=1;j<=m;j++)
        {
            if(j<=i)
                printf("%d",k);
            
            if((j+1)%2==0)
                k=0;
            else
                k=1;
        }
        printf("\n");
    }
}