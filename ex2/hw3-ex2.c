/*
Alexander Rogers
9/27/23
EX2 - Area of a triangle
*/

#include <stdio.h>
#include "heron.h"

int main(){
    // Declares all starting varibles
    distance point1, point2, point3;
    double AB, AC, BC, area_var;
    int count;

    while(area_var != 0){

        area_var = 1;
        count = 1;
        
        // Assigns all points to 0
        AssignZero(&point1);
        AssignZero(&point2);
        AssignZero(&point3);
            
        // Calls UserInput twice to assign values to both structs
        UserInput(&point1, &count);
        UserInput(&point2, &count);
        UserInput(&point3, &count);
        
        // Final function does Distance Formula on both Points then returns all points
        Length(point1, point2, &AB);
        Length(point1, point3, &AC);
        Length(point2, point3, &BC);

        Area(AB, AC, BC, &area_var);

        // Prints final value of area
        printf("The area of the triangle is: %lf\n", area_var);
        printf("To quit make area of triangle 0\n");

    }
}
