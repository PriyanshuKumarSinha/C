// Star Pattern : 36
//Author : Priyanshu Kumar Sinha // Date : 5 Aug 2022

//0
//01
//024
//0369
//0481216

#include<stdio.h>

int main()
{
    int i,j,n=5,k;
    for(i=1; i<=n;i++)    
    {
        k=0;
        for (j=1;j<=i;j++)
        {
            printf("%d",k);
            k=k+(i-1);
        }
        printf("\n");      
    }
}