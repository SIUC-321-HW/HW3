#ifndef HERON
#define HERON

// Defined struct distance in the header so main can stay a bit cleaner
typedef struct distance{
    double x;
    double y;
}distance;

void AssignZero(distance *point_xy);

void UserInput(distance *func, int *count_func);

void Length(distance p1, distance p2, double *length_func);

void Area(double a, double b, double c, double *area_func);

#endif