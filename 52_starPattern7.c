// Star Pattern : 7
//Author : Priyanshu Kumar Sinha // Date : 29 Aug 2022

// *********
// **** ****
// ***    ***
// **       **
// *          *


#include<stdio.h>

int main()
{
    int i, j;
    for (i=0; i<5;i++)
    {
        for (j=1; j<=9;j++)
        {
            if(j<=5-i || j>=5+i) 
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}