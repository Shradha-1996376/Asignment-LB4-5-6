/*
Assignment 5
Q5 Check whether it is an uppercasting alphabet,lowercase alphabet,digit or special character.
*/

/////////////////////////////////////////////////////////////////////////////////////
// function name: Checkcharactertype
//  intput: integer
//  output: integer,
//  Descriptio: perfroms checking the number is an uppercasting alphabet,lowercase alphabet,digit or special character.
//  date:   27/10/2026
//  author: Shradha Amit Hulawale
//
/////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Checkcharactertype(char  cvalue)
{

 if((cvalue >= 'A') && (cvalue <= 'Z'))
{   
    printf("%c\n upercase character",cvalue);
 }
 else if ((cvalue >= 'a') && (cvalue <= 'z'))
{   
    printf("%c\n Lowercase character",cvalue);
 }
 else if ((cvalue >= '0') && (cvalue <= '9'))
{   
    printf("%c\n it is digit",cvalue);
 }
 else 
{   
    printf("%c\n Special character",cvalue);
 }

 
}

int main()
{
    char cvalue = '\0';
    

    printf("Enter a character:\n");

    scanf("%c", &cvalue);

    Checkcharactertype(cvalue);
    
    return  EXIT_SUCCESS;
}