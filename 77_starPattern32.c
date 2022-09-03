// Star Pattern : 32
//Author : Priyanshu Kumar Sinha // Date : 3 Aug 2022

//*___*     //1___5
//_*_*_     //_2_4_
//__*__     //__3__
//_*_*_     //_2_4_
//*___*     //1___5

#include<stdio.h>

int main()
{
    int i,j,n=5,m=n/2+1,k=1;
    for(i=1; i<=n;i++)    
    {

        for (j=1;j<=n;j++)
        {
            if(j==k || j==n-k+1)
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");      
        if(i<m)
            k++;
        else 
            k--;  
    }
}