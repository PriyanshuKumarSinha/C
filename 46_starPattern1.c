// Star Pattern : 1
//Author : Priyanshu Kumar Sinha // Date : 29 Aug 2022

// *
// **
// ***
// ****
// *****

#include<stdio.h>

int main()
{
    int i, j;
    for (i=1; i<=5;i++)
    {
        for (j=1; j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}