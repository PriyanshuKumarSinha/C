// Star Pattern : 26
//Author : Priyanshu Kumar Sinha // Date : 1 Aug 2022

//A
//BA
//CBA
//DCBA

#include<stdio.h>

int main()
{
    int i,j,n=4,l=0;
    for(i=1; i<=n;i++)    
    {
        l=64+i;
        for (j=1;j<=i;j++)
        {
            printf("%c",l);
            l--;
        }
        printf("\n");        
    }
}