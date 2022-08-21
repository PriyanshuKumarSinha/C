// write a program to write your name at the center of the screeen

//Need windows.h for this program to work (not availbale on ubuntu)

#include<stdio.h>
#include<widnows.h>

COORD coord = {0,0};

int main()
{
    int x, y; //x and y coordinates
    x=12;
    y=12;
    char name[]="Priyanshu";

    gotoxy(x,y);
    printf("%s",name);

    return 0;
}

void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(Std_OUTPUT_HANDLE),coord);
}
