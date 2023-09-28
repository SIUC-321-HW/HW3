#include "heron.h"

// Assigns value of 0 to any made points structs
void AssignZero(distance *point_xy){

    point_xy->x = -1;
    point_xy->y = -1;

}

/* 
Function UserInput takes the arguments from the struct distance
I did a pass by referance for two different distance calles so I wouldn't
have to repeat code. Allowing me to use 1 function to get four input values from
the user.
*/
void UserInput(distance *func, int *count_func){

    while ((func->x < 0) || (func->y < 0)){
        printf("Please enter a positve value for X%d and Y%d: ", *count_func, *count_func);
        scanf("%lf %lf", &func->x, &func->y);

    }
    
    while((getchar()) != '\n');
    *count_func += 1;
}

/*
Function DistForm or Distance Formuala uses two point1 and point2 structs
into a single function and does the distance formula on the both points. 
Then returns funcAB back to main with with a pass by reference.
*/
void Length(distance p1, distance p2, double *length_func){

    double PQ1 = pow((p2.x - p1.x), 2);
    double PQ2 = pow((p2.y - p1.y), 2);

    *length_func = sqrt(PQ1 + PQ2);

}

void Area(double a, double b, double c, double *area_func){

    double tau = (a + b + c) / 2;

    double tauA = tau - a;
    double tauB = tau - b;
    double tauC = tau - c;

    *area_func = sqrt(tau * tauA * tauB * tauC);

}