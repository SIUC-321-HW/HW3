/*
Function starts by doing first calculation of r / 2 then starts the recurrsion after calculation
x starts as X0 then when in while loop X1 does next newton method. This process keeps iterating
until checker becomes less than 0.000001 and breaks returning x1
*/
double mysqrt(double r, double e){

    if(r == 0){
        return 0;
    }

    double x = r / 2, x1;
    double checker = 1;

    while(1){
        
        x1 = (x + r / x) / 2;
        checker = fabs(x1 - x) / x1;

        if(checker < e){
            break;
        }

        x = x1;

    }

    return x1;
}