/*
Assignment 4
Q5 Accept an integer and determine whether it is divisible by 5 without leaving any remainder
*/

/////////////////////////////////////////////////////////////////////////////////////
// function name: CheckDivisibility
//  intput: integer
//  output: integer,
//  Descriptio: perfroms checking the number is divisible 5 or not
//  date:   27/10/2026
//  author: Shradha Amit Hulawale
//
/////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int ivalue)
{

 if((ivalue % 5) == 0)
 {
    printf("Divisible by 5 \n");
 }
 else 
 {
    printf(" Not Divisible by 5\n");
 }
 

}

int main()
{
    int ivalue = 0;
    
    printf("Enter the number:\n");

    scanf("%d", &ivalue);

    CheckDivisibility(ivalue);
    
    return  EXIT_SUCCESS;
}