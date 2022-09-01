// Star Pattern : 21
//Author : Priyanshu Kumar Sinha // Date : 1 Aug 2022

//___*****      //___45678
//__*****_      //__34567_
//_*****__      //_23456__
//*****___      //12345___

#include<stdio.h>

int main()
{
    int i,j,n=4,m=n*2,k;
    for(i=1; i<=n;i++)    
    {
        for (j=1;j<=m;j++)
        {
            if(j>=n-i+1 && j<=m-i+1)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}