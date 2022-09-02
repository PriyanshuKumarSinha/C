// Star Pattern : 27
//Author : Priyanshu Kumar Sinha // Date : 2 Aug 2022

//___1___       //___4___
//__212__      //__345__
//_32123_     //_23456_
//4321234   //1234567

#include<stdio.h>

int main()
{
    int i,j,n=4,m=n*2-1,l=0;
    for(i=1; i<=n;i++)    
    {
        l=i;
        for (j=1;j<=m;j++)
        {
            if(j>=n-i+1 && j<=n+i-1 )
            {
                printf("%d",l);
                if(j<n)
                    l--;
                else
                    l++;
            }
            else
                printf(" ");
        }
        printf("\n");        
    }
}