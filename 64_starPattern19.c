// Star Pattern : 19
//Author : Priyanshu Kumar Sinha // Date : 1 Aug 2022

//____A____            //____5____
//___ABA___          //___456___
//__ABCBA__        //__34567__
//_ABCDCBA_      //_2345678_
//ABCDEDCBA     //123456789


#include<stdio.h>

int main()
{
    int i,j,n=5,m=n*2-1,k;
    for(i=1; i<=n;i++)    
    {
        k=65;
        for (j=1;j<=m;j++)
        {
            if(j>=5-i+1 && j<=5+i-1)
            {
                printf("%c",k);
                if(j<n)
                    k++;
                else
                    k--;
            }
            else
                printf(" ");


        }
        printf("\n");
    }
}