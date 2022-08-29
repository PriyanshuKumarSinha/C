//Program to print ASCII chart
//Author : Priyanshu Kumar Sinha // Date : 25 Aug 2022

#include<stdio.h>

void printAsciiChart(void);

int main()
{
    printAsciiChart();
    return 0;
}


int i = 1;
void printAsciiChart()
{
    printf(" %d : %c \n", i,i);
    i++;

    if(i<255)
        printAsciiChart();
}