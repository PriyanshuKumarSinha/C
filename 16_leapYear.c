//check leap year (year should be divisible by 4, 100 and 400)
#include <stdio.h>

int ifLeapYear(int);

int main()
{
    int year;
    printf("Enter an year : ");
    scanf("%d", &year);
    if (ifLeapYear(year))
        printf("%d is a Leap Year", year);
    else
        printf("%d is not a Leap Year", year);

    printf("\n");

    return 0;
}

int ifLeapYear(int y)
{
    //leap years are divisible by 4 or 400
    if ( y % 400 ==0 ) // should be divisible by 4 and 100 both
        return 1; 
    else 
        if (y%100 == 0 ) //if only divisble by 100 then it is not a leap year like 1700
            return 0;
        else 
            if (y%4==0) 
                return 1;
    return 0;
}