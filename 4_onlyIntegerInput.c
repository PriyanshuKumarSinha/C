// write a program which takes interger input only 
#include <stdio.h>

//function declaration
int getIntegersOnly();

int main()
{
    printf("You entered : %d\n", getIntegersOnly()); //num is an integer so it has a limit i.e -2147483647 to 2147483647 [output maybe enexpected after this]
}

// function definition
int getIntegersOnly(){
    int ch, num=0; 
    while (ch!='\n') //press enter (/n) to stop the loop
    {
        ch= getchar(); //doesn't works like getch() i.e echoes the input automatically
        if(ch>=48 && ch<=57) //48 is 0 and 57 is 9
            num = num *10 + ch-48; //logic to convert input to num
    }

    return num;//returns the integer
}