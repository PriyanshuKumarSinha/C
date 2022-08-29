// Star Pattern : 6
//Author : Priyanshu Kumar Sinha // Date : 29 Aug 2022

//    *
//   * *
//  * * *
// * * * *
//* * * * * 

//    5
//   4 6
//  3 5 7
// 2 4 6 8
//1 3 5 7 9

#include<stdio.h>

int main()
{
    int i, j,k;
    for (i=0; i<5;i++)
    {
        k=1;
        for (j=1; j<=9;j++)
        {
            if(j>=5-i && j<=5+i&&k) 
            {
                printf("*");
                k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}