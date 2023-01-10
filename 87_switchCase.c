//Calculator Program with Switch 

// Author : priyanshukumarsinha
// Date : 10 Jan 2023

#include<stdio.h>
int main()
{
    int a, b, res;
    char op; 
    printf("Select : ");
    scanf("%c", &op);
    printf("\nEnter Two Numbers : ");
    scanf("%d %d", &a, &b);

    switch(op)
    {
        case '+':
            res = a+b;
            printf("\nres = %d\n", res);
            break;

        case '-':
            res = a-b;
            printf("\nres = %d\n", res);
            break;

        case '*':
            res = a*b;
            printf("\nres = %d\n", res);
            break;

        case '/':
            res = a/b;
            printf("\nres = %d\n", res);
            break;

        case '%':
            res = a%b;
            printf("\nres = %d\n", res);
            break;
        
        default:
            printf("Invalid Operator !!\n");
            break;
    }

    return 0;
}

// OUTPUT                            
// ___________________________________
// |Select : +                        |
// |                                  |
// |Enter Two Numbers : 5             |
// |6                                 |
// |                                  |
// |res = 11                          |
//  ----------------------------------