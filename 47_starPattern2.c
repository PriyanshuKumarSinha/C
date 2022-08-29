// Star Pattern : 2
//Author : Priyanshu Kumar Sinha // Date : 29 Aug 2022

//     *
//    **
//   ***
//  ****
// *****

#include<stdio.h>

int main()
{
    int i, j;
    for (i=0; i<5;i++)
    {
        for (j=1; j<=5;j++)
        {
            if (j<5-i)//or we can keep the value of i from 1 to 5 and add 1 in this operation (j<5-i+1)
                printf(" ");
            else    
                printf("*");
        }
        printf("\n");
    }
}