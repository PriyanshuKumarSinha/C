// Star Pattern : 16
//Author : Priyanshu Kumar Sinha // Date : 1 Aug 2022

//  _  *  *  *  *  *  _       //  _  2  3  4  5  6  _       //j>=2 = 1+1 && j<=6 = n-1
//  *  _  *  *  *  _  *       //  1  _  3  4  5  _  7       //j>=3 = 2+1 && j<=5 = n-2  ||  j<k && j>n-k
//  *  *  _  *  _  *  *       //  1  2  _  4  _  6  7       //j>=4 = 3+1 && j<=4 = n-3
//  *  *  *  _  *  *  *       //  1  2  3  _  5  6  7      // 
//  *  *  _  *  _  *  *       //  1  2  _  4  _  6  7      //j>=4 = 3+1 && j<=4 = n-3
//  *  _  *  *  *  _  *       //  1  _  3  4  5  _  7      //j>=3 = 2+1 && j<=5 = n-2
//  _  *  *  *  *  *  _       //  _  2  3  4  5  6  _      //j>=2 = 1+1 && j<=6 = n-1

#include<stdio.h>

int main()
{
    int i,j,n=7,k=1;
    for(i=1; i<=n;i++)    
    {
        for (j=1;j<=n;j++)
        {
            if((j>=k+1 && j<=n-k) || (j<k ||  j>n-k+1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");

        if (i<4)
            k++;
        else
            k--;
    }
}