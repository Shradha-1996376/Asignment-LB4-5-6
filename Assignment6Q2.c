/*
Assignment 6
Q2 A student is eligible for admission if the students marks are at least 60 and age is at least 17 years
*/

/////////////////////////////////////////////////////////////////////////////////////
// function name: Checkadmission
//  intput: integer , float
//  output: float , integer
//  Descriptio: perfroms checking  A student is eligible for admission if the students marks are at least 60 and age is at least 17 years
//  author: Shradha Amit Hulawale
//
/////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Checkadmission(int iage, float fmarks)
{
    
    if(iage >= 17 && fmarks >= 60)
    {
        printf ("Eligible for admission %f %d\n",fmarks,  iage);
    }
    else
    {
        printf(" Not Eligible for admission\n");
    }
}

int main()
{
    int iage = 0;
    float fmarks = 0.0f;

    printf("Enter Marks and Age:\n");
    scanf("%f %d", &fmarks ,&iage);

    Checkadmission(iage,fmarks);
    return EXIT_SUCCESS;
}