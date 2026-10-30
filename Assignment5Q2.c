/*
Assignment 5
Q2 Check whether a year is  leap year or Not leap year 
*/

/////////////////////////////////////////////////////////////////////////////////////
// function name: ChecLeapyear
//  intput: integer
//  output: integer,
//  Descriptio: perfroms checking the number is leap year or not leap year
//  date:   27/10/2026
//  author: Shradha Amit Hulawale
//
/////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckLeapyear(int iyear)
{

 if((iyear % 4)== 0)
 {
    printf(" it is leap year\n");
 }
 else if((iyear % 100)== 0 ) 
 {
    printf("it is not leap year\n");
 }
 else if((iyear % 400)== 0 ) 
 {
    printf("it is leap year\n");
 }
 else
 {
    printf("it is not leap year\n");
 }


}

int main()
{
    int iyear = 0;
    

    printf("Enter year:\n");

    scanf("%d", &iyear);

    CheckLeapyear(iyear);
    
    return  EXIT_SUCCESS;
}