// Star Pattern : 13
//Author : Priyanshu Kumar Sinha // Date : 30 Aug 2022

// 6543210
// 543210
// 43210
// 3210
// 210
// 10
// 0

#include<stdio.h>

int main()
{
    int i,j,n=4,k;
    for(i=n*2-1-1; i>=0;i--)    
    {
        for (j=i;j>=0;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}