#include "func.h"

/* 
Function UserInput takes the arguments from the struct distance
I did a pass by referance for two different distance calles so I wouldn't
have to repeat code. Allowing me to use 1 function to get four input values from
the user.
*/
void UserInput(distance *func, int *fcount){

    while ((func->x <= 0) || (func->y <= 0)){
        printf("Please enter a positve value for X%d and Y%d: ", *fcount, *fcount);
        scanf("%f %f", &func->x, &func->y);
    }
    
    *fcount += 1;
}

/*
Function DistForm or Distance Formuala uses two point1 and point2 structs
into a single function and does the distance formula on the both points. 
Then returns funcAB back to main with with a pass by reference.
*/
void length(distance p1, distance p2, float *funcAB){

    float PQ1 = pow((p2.x - p1.x), 2);
    float PQ2 = pow((p2.y - p1.y), 2);

    *funcAB = sqrt(PQ1 + PQ2);

}