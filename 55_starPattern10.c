// Star Pattern : 10
//Author : Priyanshu Kumar Sinha // Date : 29 Aug 2022


//    *   
//   ***  
//  ***** 
// *******
//  ***** 
//   ***  
//    *   

#include<stdio.h>

int main()
{
    int i, j,m=7,n=m/2+1,k=0; // n=4
    for (i=0; i<m;i++) // 7rows
    {
        for (j=1; j<=n*2-1;j++) // 7 columns
        {
            if(j<n-k || j>n+k)  //1<4-5 || 1>4+5
                printf(" ");
            else
                printf("*");
        }
        printf("\n");

        if(i<n-1)
            k++;
        else
            k--;
    }
}