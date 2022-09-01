// Star Pattern : 15
//Author : Priyanshu Kumar Sinha // Date : 30 Aug 2022

//         1  
//       12  
//     123  
//   1234  
// 12345  
//   1234  
//     123  
//       12  
//         1  

#include<stdio.h>

int main()
{
    int i,j,n=9,k=1,l;
    for(i=1; i<=n;i++)    
    {
        l=1;
        for (j=1;j<=(n+1)/2;j++)
        {
            if(j>5-k)
            {
                printf("%d",l);
                l++;
            }  
            else
                printf(" ");
        }
        printf("\n");

        if(i<5)
            k++;
        else
            k--;
    }
}