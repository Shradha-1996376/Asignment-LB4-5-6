/*
Assignment 4
Q4 Check whether a Age is 18 Eligible for voting ,Not Eligible for voting, Invalid age   
*/

/////////////////////////////////////////////////////////////////////////////////////
// function name: CheckVotingEligibility
//  intput: integer
//  output: integer,
//  Descriptio: perfroms checking the number is greater or equals
//  date:   27/10/2026
//  author: Shradha Amit Hulawale
//
/////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iage)
{

 if((iage) < (0))
 {
    printf(" invalid age\n");
 }
 else if((iage) >= (18) ) 
 {
    printf("Eligible for voting\n");
 }
 else
 {
    printf("Not Eligible for voting\n");
 }


}

int main()
{
    int iage = 0;
    

    printf("Enter the number:\n");

    scanf("%d", &iage);

    CheckVotingEligibility(iage);
    
    return  EXIT_SUCCESS;
}