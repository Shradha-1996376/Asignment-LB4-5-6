/*
Assignment 6
Q5 checking the employee monthly salary and completed year of sarvice
*/

/////////////////////////////////////////////////////////////////////////////////////
// function name: CalculateBonus
//  intput: integer, float
//  output: float , integer
//  Descriptio: perfroms checking the employee monthly salary and completed year of sarvice.
//  date:   27/10/2026
//  author: Shradha Amit Hulawale
//
/////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(int iyear, float fsalary)
{
    float fbonus = 0.0f;
    if(iyear < 5 )
    {
        fbonus = ((fsalary) * (0.05));
        printf("total bonus is 5 percentage :%f\n",fbonus);
    }
    else if (iyear > 5 && iyear < 10)
     {     
         fbonus = ((fsalary) * (0.10));
          printf("total bonus is 7 percentage :%f\n",fbonus);
     }
    else if (iyear >= 10)
    {
          fbonus = ((fsalary) *(0.15));
         printf("total bouns is 15 percentage :%f\n",fbonus);
    } 
}

int main()
{
    int iyear = 0;
    float fsalary = 0.0f;

    
    printf("Enter Salary:\n");
    scanf("%d %f", &iyear, &fsalary);

    CalculateBonus(fsalary, iyear);
    

    return EXIT_SUCCESS;
}