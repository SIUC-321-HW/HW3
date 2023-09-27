#ifndef FUNC
#define FUNC

// Defined struct distance in the header so main can stay a bit cleaner
typedef struct distance{
    float x;
    float y;
}distance;

void UserInput(distance *func, int *fcount);

void DistForm(distance p1, distance p2, float *funcAB);

#endif