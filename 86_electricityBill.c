//An electricity board charges the following rates for the use of electricity
// For the first 200 units --> 80 paisa/unit
// For the Next 100 units --> 90 paisa/unit
// Beyond 300 units --> 100 paisa/unit

// All users are chareged a minimum of Rs. 100 as meter charge

// If the total amount is more than 400 then an additional charge of 15% of total amount is charged.

// Design and develop a program to read the name of the user, No. of units, No. of units consumed and print out these charges.

// Author : priyanshukumarsinha
// Date : 10 Jan 2023

#include<stdio.h>
int main()
{
    int units, meter_charge = 100; 
    float total_amount;

    printf("Enter Units Consumed : ");
    scanf("%d", &units);
    // units = 550

    //conditions
    if(units <= 200)
    {
        total_amount = units*80;
    }
    else if(units>200 && units <=300)
    {
        total_amount = 200*80 + (units - 200)*90;
    }
    else{
        total_amount = 200*80 + 100*90 + (units - 300)*100;
        //total_amount = 200*80 + 100*90 + (550-300)*100 = 16000+9000+25000 = 50000 paise
    }

    //convert paise to rupees
    total_amount = total_amount / 100;
    // total_amount = 500 rupees

    //add meter charge to total amount
    total_amount = total_amount + meter_charge;
    // total_amount = 500 + 100 = 600 rupees

    //if charge is greater than 400
    if(total_amount>400) //600>400 (True)
    {
        total_amount = total_amount + total_amount * (15/100);
        //total_amount = 600 + 600 * (15/100) = 600 + 90 = 690
    }
    printf("\nTotal Amount = %f\n", total_amount);
    //OUTPUT : Total Amount = 690.0000000

    return 0;
}

// OUTPUT                            
// ___________________________________
// |Enter Units Consumed : 550        |
// |                                  |
// |Total Amount = 600.000000         |
//  ----------------------------------