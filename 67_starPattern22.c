// Star Pattern : 22
//Author : Priyanshu Kumar Sinha // Date : 1 Aug 2022

//___1___       //___4___
//__12A__     //__345__
//_123AB_    //_23456_
//1234ABC  //1234567 

#include<stdio.h>

int main()
{
    int i,j,n=4,m=n*2-1,k;
    for(i=1; i<=n;i++)    
    {
        k=1;
        for (j=1;j<=m;j++)
        {
            if(j>=n-i+1 && j<=n+i-1)
            {
                if(j<n)
                    printf("%d",k);
                else if (j==n)
                {
                    printf("%d",k);
                    k=64; //a=65
                }
                else
                    printf("%c",k);

                k++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}