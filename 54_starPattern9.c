// Star Pattern : 9
//Author : Priyanshu Kumar Sinha // Date : 29 Aug 2022

// *********
// **** ****
// ***    ***
// **       **
// *          *


#include<stdio.h>

int main()
{
    int i, j,k;
    for (i=0; i<5;i++)
    {
        k=65; //ascii of "A"
        for (j=1; j<=9;j++)
        {
            if(j<=5-i || j>=5+i) 
            {
                printf("%c",k);

            }
            else
                printf(" ");

                            if(j<5)
                    k++;
                else
                    k--;
        }
        printf("\n");
    }
}