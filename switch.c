#include<stdio.h>

double hoge(int n){
    double x = 100;
    switch (n){
        default:
            x = 1.0 / n;
            if(x < 0){
                case 5:
                x *= -1;
            }else{
                x *= 2;
            }
        case 0:
            x += 3;
    }
    return x;
}

int main(void){
    printf("%lf\n", hoge(0));   // => 103.000000
    printf("%lf\n", hoge(1));   // => 5.000000
    printf("%lf\n", hoge(-2));  // => 3.500000
    printf("%lf\n", hoge(5));   // => -97.000000
}
