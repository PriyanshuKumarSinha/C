// Star Pattern : 35
//Author : Priyanshu Kumar Sinha // Date : 5 Aug 2022

//___*___
//__*_*__
//_*_*_*_
//*_*_*_*

#include<stdio.h>

int main()
{
    int i,j,n=4,m=n*2-1,k=1;
    for(i=1; i<=n;i++)    
    {
        for (j=1;j<=m;j++)
        {
            if(j>=n-i+1 && j<=n+i-1)
            {
                if(k%2!=0)
                    printf("*");
                else
                    printf(" ");
                k++;
            }
            else
                printf(" ");
        }
        printf("\n");      
        k++;
    }
}