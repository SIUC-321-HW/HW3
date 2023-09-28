/*
Alexander Rogers
9/26/23
EX1 - Line Segment Length
contributors: https://www.fresh2refresh.com/c-programming/c-passing-struct-to-function/
*/

#include <stdio.h>
#include <math.h>
#include "func.h"

int main(){
    // Declares all starting varibles
    distance point1, point2;
    int count = 1;
    float AB;

    // Assigns all points to 0
    point1.x = 0, point1.y = 0;
    point2.x = 0, point2.y = 0;

    // Calls UserInput twice to assign values to both structs
    UserInput(&point1, &count);
    UserInput(&point2, &count);
    
    // Final function does Distance Formula on both Points then returns value to AB
    length(point1, point2, &AB);

    // Prints final value of Distance
    printf("The Distance between points 1 and 2 is: %f\n", AB);



}

