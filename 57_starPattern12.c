// Star Pattern : 12
//Author : Priyanshu Kumar Sinha // Date : 30 Aug 2022

// *******
//  *****
//   ***
//    *

#include<stdio.h>

int main()
{
    int i,j,n=4;
    for(i=0;i<n;i++)    
    {
        for (j=1; j<=n*2-1;j++)
        {
            if(j<=n*2-1-i && j>i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}