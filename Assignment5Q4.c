/*
Assignment 5
Q4 Check whether it is divisible by both 3 and 5 ,only 3, only 5, or neither
*/

/////////////////////////////////////////////////////////////////////////////////////
// function name: Checkmultipledivisibility
//  intput: integer
//  output: integer,
//  Descriptio: perfroms checking the number is divisible by both 3 and 5 ,only 3, only 5, or neither
//  date:   27/10/2026
//  author: Shradha Amit Hulawale
//
/////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Checkmultipledivisibility(int ivalue)
{

 if((ivalue % 3)== 0 && (ivalue % 5)== 0) 
 {
    printf("divisible by both\n");
 }
 else if((ivalue % 3)== 0 )
 {
    printf(" divisible by 3\n");
 }
 else if((ivalue% 5)== 0 ) 
 {
    printf("divisible by 5\n");
 }
 else
 {
    printf("not divisible by either\n");
 }


}

int main()
{
    int ivalue = 0;
    

    printf("Enter number:\n");

    scanf("%d", &ivalue);

    Checkmultipledivisibility(ivalue);
    
    return  EXIT_SUCCESS;
}