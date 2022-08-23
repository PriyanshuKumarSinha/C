// give roots of quadratic eqn (only real roots)
// compile with gcc 15_rootsOfQuadEqn.c -o 15_rootsOfQuadEqn -lm (to like math.h)

#include<stdio.h>
#include<stdlib.h> //for exit()
#include<math.h> //for sqrt()

int calcDet(int, int, int);
void calcRoot(int, int, int, double *, double *);

int main()
{
    int a,b,c; //ax^2 + bx + c = 0
    double alpha, beta; //roots
    printf("Enter coefficient of x2, x and constant c respectively : ");
    scanf("%d %d %d", &a,&b,&c);

    calcRoot(a,b,c, &alpha, &beta);
    printf("Roots of quad eqn %dx2 + %dx + %d = 0 are : %f and %f", a,b,c,alpha,beta);
    printf("\n");

    return 0;
}

void calcRoot(int a, int b, int c, double *alpha, double *beta)
{
    int D = calcDet(a,b,c); //Determinant
    if (D>= 0) // real roots exists
    {
        *alpha = (-1*b + sqrt(D))/2*a;
        *beta = (-1*b - sqrt(D))/2*a;
    }
    else // imaginary roots
    {   
        printf("\n!! No Real Roots Exists !! \n"); 
        exit(0);
    }
}

int calcDet(int a, int b, int c)
{
    return (b*b - 4*a*c);
}