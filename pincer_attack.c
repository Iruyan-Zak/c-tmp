#include<stdio.h>
#include<math.h>

double f(double x){ return x - 3*cos(x)*cos(x) - 2; }

int main(void){
    double x, y, y1;
    double x1 = -1, x2 = 5;

    while(1){
        x = 0.5 * (x1 + x2);
        y = f(x);
        if(abs(y) < 1e-6){
            printf("%lf\n", x);
            return 0;
        }
        y1 = f(x1);
        if(y * y1 > 0){
            x1 = x;
        } else {
            x2 = x;
        }
    }
}
