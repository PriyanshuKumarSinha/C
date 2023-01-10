// Design and develop a C Program that accepts 3 Coefficients a,b,c of a quadratic equation as input and compute all possible roots & rint the roots for a given set of coefficients. Also print the message in case of zero valued coefficients.
// Author : priyanshukumarsinha
// Date : 10 Jan 2023

#include<stdio.h>
#include<math.h>
//we need to include math.h header file so that we can mathematical functions 
// like,
// sqrt() (used for calculating square root of a number)
// fabs() (Modulus function, always returns a positive number i.e fabs(-2) = 2)
int main()
{
    float a,b,c,D,r1,r2,rp,ip;
    //a,b,c -> coeffients of a quad eqn
    //D -> discriminant (b^2 - 4ac)
    //r1, r2 -> roots of quad eqn
    //rp, ip -> real part and imaginary part if roots are imaginary

    printf("Enter Co-efficients : ");
    scanf("%f %f %f", &a, &b, &c);
    //for eqn x^2+2x+1 = 0 
    //a = 1; b = 2; c = 1

    //calculate Discriminant
    D= b*b - 4*a*c;
    //D = 2*2 - 4*1*1 = 4 - 4 = 0

    if (D>0) //0>0 (False)
    {
        r1 = (-b + sqrt(D))/2*a;
        r2 = (-b - sqrt(D))/2*a;
        printf("\nRoots are real and distinct");
        printf("\nr1 = %f and r2 = %f\n",r1,r2);
    }
    else if(D==0) //0 == 0 (True)
    {
        r1 = -b/2*a; //since D = 0
        // r1 = -2/2*1 = -2/2 = -1
        printf("\nRoots are Real and Equal");
        printf("\nr1 = r2 = %f\n", r1);
        //Output : r1 = r2 = -1
    }
    else{
        printf("\nRoots are imaginary");
        rp=-b/2*a;
        ip=sqrt(fabs(D))/2*a;
        //we have to use fabs(D) here since sqrt() takes only positive numbers as input
        printf("\nr1 = %f + i(%f) and r1 = %f - i(%f)\n", rp,ip,rp,ip);
    }

    return 0;
}


// OUTPUT                            
// ___________________________________
// |Enter Co-efficients : 1           |
// |2                                 |
// |1                                 |
// |                                  |
// |Roots are Real and Equal          |
// |r1 = r2 = -1.000000               |
//  ----------------------------------