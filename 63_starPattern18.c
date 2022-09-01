// Star Pattern : 18
//Author : Priyanshu Kumar Sinha // Date : 1 Aug 2022

//*********     //123456789
//_*******_     //_2345678_
//__*****__     //__34567__
//___***___     //___456___
//____*____     //____5____

#include<stdio.h>

int main()
{
    int i,j,n=5,m=n*2-1;
    for(i=1; i<=n;i++)    
    {
        for (j=1;j<=m;j++)
        {
            if(j>=i && j<=m-i+1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}