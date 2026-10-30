/*
Assignment 6
Q1 Accept the number of electricity unit consumed and calculate the total bill 
*/

/////////////////////////////////////////////////////////////////////////////////////
// function name: CalculateElectricitybill
//  intput: integer
//  output: float
//  Descriptio: perfroms checking the number of electricity unit consumed and calculate the total bill.
//  date:   27/10/2026
//  author: Shradha Amit Hulawale
//
/////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CalculateElectricitybill(int iunits)
{
    float fbill = 0.0f;
    if(iunits<= 100)
    {
        fbill = iunits * 5;
        printf("total bill is 5 rs :%f\n",fbill);
    }
    else if (iunits >= 101 && iunits <=200)
     {   fbill = 500 +((iunits - 100)*7);
          printf("total bill is 7rs :%f\n",fbill);
     }
    else if (iunits >= 200)
    {
        fbill= 1200+((iunits-200)*10);
         printf("total bill is 10rs :%f\n",fbill);
    } 
}

int main()
{
    int iunits = 0;

    
    printf("Enter consumed unit:\n");
    scanf("%d", &iunits);

    CalculateElectricitybill(iunits);
    printf("Bill received successfully\n");

    return EXIT_SUCCESS;
}