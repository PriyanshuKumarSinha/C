// move text on screen with keystrokes

#include<stdio.h>
#include<3_nameAtTheCenterOfScreen.c>

void input();

int x=0,y=0;

int main()
{
    extern int x,y;
    char name[]= "Priyanshu";
    while(1){
        input();
        if(x>0 & y>0)
        {
            gotoxy(x,y);
            printf("%s",name);
        }
    }
}

void input()
{
    extern int x,y;
    //when we press any arrow key getchar return something like ^[[D 
    //in which 
    //^[ is for esc  then [ and then D which means left key was pressed

    // lets check for esc first
    if(getchar() == '\033')
    {
        getchar(); //for [
        switch (getchar())
        {
        case 'A':
            y-=1; //UP
            break;
        case 'B':
            y+=1; //DOWN
            break;   
        case 'C':
            x+=1; // RIGHT
            break;        
        case 'D':
            x-=1; //LEFT 
            break;     
        default:
            exit(0); //exit if any key other than arrow keys is pressed
        }
    }
    
}