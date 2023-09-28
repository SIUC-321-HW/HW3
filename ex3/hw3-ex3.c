/*
Alexander Rogers
9/27/23
EX3 - Calculation of a square root
*/

#include <stdio.h>
#include <math.h>
#include "square.h"


int main(){

    double square_num;

    while(1){

        // Gets Users Input
        UserInput(&square_num);

        // Checks to see if number is a negtive number if true then quits
        if(square_num <= 0){
            return 0;
        }

        // Calls my square root function then prints result
        double result = mysqrt(square_num, 0.000001);
        printf("%lf\n", result);

    }

}