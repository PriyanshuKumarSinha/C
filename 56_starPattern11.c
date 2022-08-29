// Star Pattern : 11
//Author : Priyanshu Kumar Sinha // Date : 29 Aug 2022


// *
// **
// ***
// ****
// ***
// **
// *

#include<stdio.h>

int main()
{
    int i, j,m=7,n=m/2+1,k=1; // n=4
    for (i=1; i<=m;i++) // 7rows
    {
        for (j=1; j<=k;j++) // 7 columns
        {
            printf("*");
        }
        printf("\n");

        if(i<n)
            k++;
        else
            k--;
    }
}