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

void findgreater(int ifirst ,int isecond, int ithird)
{

 if((ifirst) > (isecond) && (ifirst) > (ithird))
 {
    printf("first is Greater\n");
 }
 else if((ifirst ) < (isecond) && (isecond)>(ithird)) 
 {
    printf("second is Greater\n");
 }
 else if((ifirst ) < (ithird) && (isecond)<(ithird)) 
 
 {
    printf("third is Greater\n");
 }
 else
 {
    printf("it is Equals\n");
 }


}

int main()
{
    int ivalue1 = 0, ivalue2 = 0 ,ivalue3 = 0;
    

    printf("Enter the three number:\n");

    scanf("%d %d %d", &ivalue1 ,&ivalue2, &ivalue3);

    findgreater(ivalue1 , ivalue2, ivalue3);
    
    return  EXIT_SUCCESS;
}