// Star Pattern : 24
//Author : Priyanshu Kumar Sinha // Date : 1 Aug 2022

// *******      //1234567
// *_____*      //1______7
// *_***_*      //1_345_7
// *_*_*_*      //1_3_5_7
// *_***_*      //1_345_7
// *_____*      //1______7
// *******      //1234567

#include<stdio.h>

int main()
{
    int i,j,n=7,m=n,k;
    for(i=1; i<=n;i++)    
    {
        k=1;
        for (j=1;j<=m;j++)
        {
            if(
                (i==1 || i==7) ||
                ((j==1 || j==7)) ||
                ((i==3 || i==5) && (j>=3 && j<=5)) ||
                (i==4 && j%2!=0)
                )
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}