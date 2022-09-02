// Star Pattern : 27
//Author : Priyanshu Kumar Sinha // Date : 2 Aug 2022

//1
//3*2
//4*5*6
//10*9*8*7
//11*12*13*14*15

#include<stdio.h>

int main()
{
    int i,j,n=5,m=n*2-1,l=1,k=1,x=0;
    for(i=1; i<=n;i++)    
    {
        for (j=1;j<=i*2-1;j++)
        {
            if(j%2 == 0)
                printf("*");
            else
            {
                printf("%d",k);
                if(i%2 == 0)
                    k--;
                else
                    k++;
            }
        }
        l+=2; // 1 3 5 7 9
        if(i%2!=0)
        {
            k=x+l;
            x=k;
        }
        else
            k=x+1;
        printf("\n");        
    }
}