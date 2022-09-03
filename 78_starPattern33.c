// Star Pattern : 32
//Author : Priyanshu Kumar Sinha // Date : 3 Aug 2022

//ABCDEFG
//ABC_EFG
//AB___FG
//A_____G

#include<stdio.h>

int main()
{
    int i,j,n=4,m=n*2-1,k=1;
    for(i=1; i<=n;i++)    
    {
        k=65;
        for (j=1;j<=m;j++)
        {
            if(j<=n-i+1 || j>=n+i-1)
                printf("%c",k);
            else
                printf(" ");
            k++;
        }
        printf("\n");      
    }
}