// Star Pattern : 13
//Author : Priyanshu Kumar Sinha // Date : 30 Aug 2022

//       1
//     232
//   34543
// 4567654

#include<stdio.h>

int main()
{
    int i,j,n=4,k;
    for(i=0;i<n;i++)    
    {
        k=i+1;
        for (j=1; j<=n*2-1;j++)
        {
            if(j<n-i || j>n+i)
                printf(" ");
            else
             {
                printf("%d",k);
                if(j<n)
                    k++;
                else
                    k--;
             }
        }
        printf("\n");
    }
}