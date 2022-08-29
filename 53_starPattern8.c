// Star Pattern : 8
//Author : Priyanshu Kumar Sinha // Date : 29 Aug 2022

//       1
//     121
//   12321
//  1234321
// 123454321

#include<stdio.h>

int main()
{
    int i, j,k;
    for (i=0; i<5;i++)
    {
        k=1;
        for (j=1; j<=9;j++)
        {
            if(j>=5-i && j<=5+i) 
            {
                printf("%d",k);
                if(j<5)
                    k++;
                else
                    k--;
            }

            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}