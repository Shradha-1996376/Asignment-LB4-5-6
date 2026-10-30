/*
Assignment 6
Q4 Accept three integer values representing the lengths of the sides of triangle.All the side must be positive and the sum of any two side must be greater than the third side
*/

/////////////////////////////////////////////////////////////////////////////////////
// function name: CheckTriangle
//  intput: integer , integer , integer
//  output: integer , integer ,integer
//  Descriptio: perfroms checking Accept three integer values representing the lengths of the sides of triangle.All the side must be positive and the sum of any two side must be greater than the third side
//  author: Shradha Amit Hulawale
//
/////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iside1, int iside2, int iside3)
{
    
    if(iside1 > 0 && iside2 > 0 && iside3 > 0 &&
       (iside1 + iside2 > iside3)&&
       (iside2 + iside3 > iside1)&&
       (iside1 + iside3 > iside2 ))
    {
        printf ("triagle is Constructed %d %d %d\n",iside1,iside2,iside3);
    }
    else
    {
        printf("  Triangle is not Constructed \n");
    }
}

int main()
{
    int iside1 = 0, iside2 = 0, iside3 = 0 ;

    printf("Enter the side of the triangle:\n");
    scanf("%d %d %d", &iside1 ,&iside2, &iside3);

    CheckTriangle(iside1,iside2,iside3);
    return EXIT_SUCCESS;
}