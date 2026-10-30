/*
Assignment 6
Q1 Accept the total purchase amount and calculate the final payable amount after applying the discount.
*/

/////////////////////////////////////////////////////////////////////////////////////
// function name: CalculateElectricitybill
//  intput: float
//  output: float
//  Descriptio: perfroms Accept the total purchase amount and calculate the final payable amount after applying the discount.
//  date:   27/10/2026
//  author: Shradha Amit Hulawale
//
/////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Calculatediscount(float famount)
{
    float fdiscount = 0.0f;
    float fFinalamount = 0.0f;

    if(famount<= 1000)
    {
        fdiscount = famount * 0;
        fFinalamount = famount - fdiscount;
        printf("total bill is 0% Discount :%f\n",fFinalamount);
    }
    else if (famount >= 1000 && famount <=5000)
     {   fdiscount = famount * 10/100;
        fFinalamount = famount - fdiscount;
        printf("total bill is 10% Discount :%f\n",fFinalamount);
     }
    else if (famount >= 5000)
    {
        fdiscount = famount * 20/100;
        fFinalamount = famount - fdiscount;
        printf("total bill is 20% Discount :%f\n",fFinalamount);
    } 

}

int main()
{
    float famount = 0.0f;

    printf("Enter consumed unit:\n");
    scanf("%f", &famount);

    Calculatediscount(famount);
    return EXIT_SUCCESS;
}