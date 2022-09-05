// Star Pattern : 34
//Author : Priyanshu Kumar Sinha // Date : 4 Aug 2022

//1                            //-5+6=1         //1
//6-2                        //1+5 6            //6_6-4
//10-7-3                  //6+4=10        //10_10-3_7-4
//13-11-8-4            //10+3=13     //13_13-2_11-3_8-4
//15-14-12-9-5      //13+2=15     //15_15-1_14-2_12-3_9-4

#include<stdio.h>

int main()
{
    int i,j,n=5,m,k=-1*n,l=6,x=n;
    for(i=1; i<=n;i++)    
    {
        k=k+l;
        m=k;
        x=l-1;
        for (j=1;j<=i;j++)
        {
            printf("%d",m);
            m=m-x; 
            x++;
        }
        printf("\n");      
        l--;
    }
}