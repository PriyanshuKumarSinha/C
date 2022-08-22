// move text on screen with keystrokes

#include<stdio.h>
#include<3_nameAtTheCenterOfScreen.c> //to use gotoxy which we used earlier
#include<windows.h>

void input();

int x=0,y=0;

int main()
{
    extern int x,y; //global x and y
    char name[]= "Priyanshu"; 

    while(1){ //to exit press any key other than arrow keys
        input(); //continuously takes input // press enter after every input
        if(x>0 & y>0)
        {
            system("clr"); //need windows.h for this also
            gotoxy(x,y); //no need to define here again we already included the file
            printf("%s",name); //prints this again at new position
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