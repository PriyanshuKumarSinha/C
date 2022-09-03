// Star Pattern : 31
//Author : Priyanshu Kumar Sinha // Date : 3 Aug 2022

//___1___       //___4___
//__A_B__     //__3_5__
//_1_2_3_     //_2_4_6_
//A_B_C_D   //1_3_5_7

#include<stdio.h>

int main()
{
    int i,j,n=4,m=n*2-1,k=1,l;
    for(i=1; i<=n;i++)    
    {
        if(i%2==1)
            k=1;
        else
            k=65;
        l=k;
        for (j=1;j<=m;j++)
        {
            if(j>=n-i+1&&j<=n+i-1)
            {
                if(k%2)
                {
                    if(i%2 ==0)
                        printf("%c",l);
                    else
                        printf("%d",l);
                    l++;
                }
                else
                    printf(" ");
                k++;
            }
            else
                printf(" ");
        }
        printf("\n");        
    }
}