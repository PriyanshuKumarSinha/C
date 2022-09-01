// Star Pattern : 20
//Author : Priyanshu Kumar Sinha // Date : 1 Aug 2022

//___A1___            //___45___
//__AB12__          //__3456__
//_ABC123_        //_234567_
//ABCD1234      //12345678



#include<stdio.h>

int main()
{
    int i,j,n=4,m=n*2,k;
    for(i=1; i<=n;i++)    
    {
        k=65;
        for (j=1;j<=m;j++)
        {
            if(j>=5-i && j<=5+i-1)
            {
                if(j<n)
                    printf("%c",k);
                else if (j==n)
                {
                    printf("%c",k);
                    k=0;
                }
                else
                    printf("%d",k);

                k++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}