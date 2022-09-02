// Star Pattern : 30
//Author : Priyanshu Kumar Sinha // Date : 2 Aug 2022

//____*         //____5
//___**         //___45
//__***         //__345
//__1**        //__345
//*_1_*        //1_3_5
//**1__        //123__
//***__        //123__
//**___        //12___
//*____        //1____

#include<stdio.h>

int main()
{
    int i,j,n=9,m=5,k=3;
    for(i=1; i<=n;i++)    
    {
        for (j=1;j<=m;j++)
        {
            if(
                    (j>m-i && j<=n-i+1&& (i<=k || i>n-k)) || 
                    (i>k && i<=n-k && (j>i-1 || j<=i-4)) //for i=4,5,6
                )
                printf("*");
            else 
                if(i>k && i<=n-k && j==k)
                        printf("1");
                else
                    printf(" ");
        }
        printf("\n");        
    }
}