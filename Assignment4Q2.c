/*
Assignment 4
Q2 Check whether a number is positive or negative. 
*/

/////////////////////////////////////////////////////////////////////////////////////
// function name: checkevenodd
//  intput: integer
//  output: integer
//  Descriptio: perfroms checking the number is even or odd
//  date:   27/10/2026
//  author: Shradha Amit Hulawale
//
/////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void checkevenodd(int ivalue)
{

 if(ivalue % 2 == 0)
 {
    printf("it is Even\n");
 }
 else 
 {
    printf("it is odd\n");
 }


}

int main()
{
    int ivalue = 0;

    printf("Enter the number:\n");

    scanf("%d", &ivalue);

    checkevenodd(ivalue);
    
    return  EXIT_SUCCESS;
}