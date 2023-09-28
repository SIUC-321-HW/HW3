/*
Alexander Rogers
9/28/23
EX4 - Comparision of different functions
*/

#include <stdio.h>
#include <math.h>
#include "heron.h"
#include "square.h"

int main(){
    // Declares all starting varibles
    distance point1, point2, point3;
    double AB, AC, BC, area_var, my_area_var;
    int count;

    while(area_var != 0){

        area_var = 1;
        count = 1;
        
        // Assigns all points to 0
        AssignZero(&point1);
        AssignZero(&point2);
        AssignZero(&point3);
            
        // Calls UserInputs to assign values to both structs
        UserInput(&point1, &count);
        UserInput(&point2, &count);
        UserInput(&point3, &count);
        
        // Final function does Distance Formula on both Points then returns all points
        Length(point1, point2, &AB);
        Length(point1, point3, &AC);
        Length(point2, point3, &BC);

        //Finds the area of the triangle
        Area(AB, AC, BC, &area_var, &my_area_var);

        // Prints final value of area
        printf("The area of the triangle is: %lf\n", area_var);
        printf("The area of the triangle is: %lf\n", my_area_var);
        printf("To quit make area of triangle 0\n");

    }
}

/*
e = 0.1
Please enter a positve value for X1 and Y1: 0.12356 0.13564
Please enter a positve value for X2 and Y2: 5.67206 1.67902
Please enter a positve value for X3 and Y3: 1.89150 6.10604
The area of the triangle is: 15.199081
The area of the triangle is: 15.205451

while testing the code and trying to find the inconsistencies between math.h sqrt and mysqrt they remained very close
or the same. I tried this about 5 times before I had to put the the error e to 0.1 and go 5 decimal places that I finally 
saw a difference between the outputs. and even then the outputs only varied by a small amount. All and all the newtwon method
for square roots is honestly pretty consistant with giving correct outputs and accounting for accuracy.
*/