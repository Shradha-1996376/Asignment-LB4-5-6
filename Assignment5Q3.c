/*
Assignment 5
Q3 Accept the marks of the student out of 100 and display the grade according to the marks 
*/

/////////////////////////////////////////////////////////////////////////////////////
// function name: Displaygrade
//  intput: float
//  output: float
//  Descriptio: perfroms accept the marks out of and disply according to grade 
//  date:   27/10/2026
//  author: Shradha Amit Hulawale
//
/////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Displaygrade(float fmarks)
{
    
     if((fmarks >= 90 ) && (fmarks <= 100))
    {
        
        printf("grade of student is A \n");
    }
    
    else if((fmarks >= 75 ) && (fmarks <= 89))
    {
        
        printf("grade of student is B \n");
    }
    else if((fmarks >= 60 ) && (fmarks <= 74))
    {
        
        printf("grade of student is C \n");
    }
    else if((fmarks >= 40 ) && (fmarks <= 59))
    {
        
        printf("grade of student is D \n");
    }
    else if ((fmarks < 40))
    {
        printf("student is fail \n");
    }
    else if((fmarks > 100))
    {
        printf("invalid marks\n");

    }
}   

int main()
{
    float fmarks = 0.0f;

    printf("enter the marks\n");
    scanf("%f",&fmarks);

    Displaygrade(fmarks);

    return EXIT_SUCCESS;
}