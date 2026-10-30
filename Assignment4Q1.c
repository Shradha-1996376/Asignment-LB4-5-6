/*
Assignment 4
Q1 Check whether a number is positive or negative. 
*/

/////////////////////////////////////////////////////////////////////////////////////
// function name: checkNumber
//  intput: integer
//  output: integer
//  Descriptio: perfroms checking the number is positive or negative 
//  date:   04/10/2026
//  author: Shradha Amit Hulawale
//
/////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void checkNumber(int ivalue)
{

 if(ivalue >=0)
 {
    printf("it is positive\n");
 }
 else 
 {
    printf("it is negative\n");
 }


}

int main()
{
    int ivalue = 0;

    printf("Enter the number:\n");

    scanf("%d", &ivalue);

    checkNumber(ivalue);
    
    return  EXIT_SUCCESS;
}