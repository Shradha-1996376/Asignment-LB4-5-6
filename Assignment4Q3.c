/*
Assignment 4
Q3 Check whether a number is greater or equalss. 
*/

/////////////////////////////////////////////////////////////////////////////////////
// function name: findgreater
//  intput: integer,integer
//  output: integer,integer
//  Descriptio: perfroms checking the number is greater or equals
//  date:   27/10/2026
//  author: Shradha Amit Hulawale
//
/////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void findgreater(int ivalue1 ,int ivalue2)
{

 if((ivalue1) > (ivalue2))
 {
    printf("ivalue1 is Greater\n");
 }
 else if((ivalue1) < (ivalue2)) 
 {
    printf("ivalue2 is Greater\n");
 }
 else
 {
    printf("it is Equals\n");
 }


}

int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;

    printf("Enter the two number:\n");

    scanf("%d %d", &ivalue1 ,&ivalue2);

    findgreater(ivalue1 , ivalue2);
    
    return  EXIT_SUCCESS;
}