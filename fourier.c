#include <stdio.h>
#include <math.h>

int main(void)
{
    const int f=10000;
    const double dt=pow(10,-7);
    int n,t,max_n=0;
    double volt[1000] = {-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-0.76,0.98,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1.02,1,1,1,1,1,1,1.02,1.02,1.02,1,1.02,1.02,1,1.02,1,1,1.02,1.02,1,1.02,1,1.02,1,1.02,1.02,1.02,1.02,1,1.02,1.02,1.02,1,1,1,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1,1.02,1.02,1.02,1.02,1.02,1.02,1,1.02,1,1,1,1,1.02,1.02,1.02,1.02,1,1.02,1,1.02,1.02,1,1,1.02,1.02,1.02,1.02,1.02,1,1.02,1,1.02,1.02,1,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1,1,1.02,1,1,1.02,1,1,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1,1,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1,1,1.02,1,1.02,1,1,1,1,1,1.02,1,1,1,1,1.02,1.02,1.02,1,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1,1,1.02,1.02,1,1.02,1.02,1.02,1.02,1,1,1.02,1,1.02,1,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1,1.02,1.02,1.02,1.02,1.02,1,1.02,1,1.02,1.02,1.02,1.02,1.02,1.02,1.02,1,1.02,1.02,1.02,1.02,1.02,1,1.02,1.02,1.02,1,1.02,1.02,1.02,1.02,1.02,1.02,1,1.02,1,1.02,1.02,1.02,1.02,1.02,1,1.02,1.02,1.02,1,1.02,1.02,1.02,1.02,1.02,1.02,1,1,1,1.02,1.02,1,1.02,1,1.02,1,1.02,1,1.02,1.02,1.02,1,1,1.02,1.02,1,1,1,1,1.02,1.02,1.02,1.02,1.02,1.02,1,1.02,1,1.02,1,1,1.02,1,1.02,1.02,1,1,1,1.02,1,1.02,1.02,1,1,1,1,1.02,1,1,1,1.02,1,1,1.02,1,1.02,1.02,1.02,1.02,1,1.02,1.02,1,1,1,1.02,1.02,1,1.02,1.02,1,1.02,1,1.02,1.02,1,1,1,1,1,1.02,1.02,1,1.02,1,1.02,1,1.02,1.02,1,1.02,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1.02,1,1,1,1,1.02,1,1,1.02,1.02,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-0.34,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.02,-1.04,-1.04,-1.02,-1.04,-1.02,-1.04,-1.04,-1.04,-1.04,-1.04,-1.02,-1.04,-1.04,-1.04,-1.04,-1.02,-1.02,-1.04,-1.04,-1.04,-1.02,-1.02,-1.04,-1.04,-1.02,-1.02,-1.04,-1.04,-1.02,-1.04,-1.04,-1.04,-1.04,-1.02,-1.04,-1.02,-1.02,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.02,-1.04,-1.04,-1.02,-1.04,-1.02,-1.04,-1.04,-1.02,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.06,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.06,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.06,-1.04,-1.04,-1.04,-1.06,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.06,-1.04,-1.04,-1.06,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.06,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.06,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.06,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.06,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.06,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.06,-1.04,-1.04,-1.04,-1.06,-1.04,-1.04,-1.06,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.06,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,-1.04,};
    double sinw[1000], cosw[1000], ans_dat[1000]={}, sum=0;
    for(t=0;t<1000;++t){
        sinw[t] = sin(2*M_PI*f*t*dt);
        cosw[t] = cos(2*M_PI*f*t*dt);
    }
    printf("n$B$N>e8B$r;XDj!'(B");
    scanf("%d", &max_n);
    for(n=0;n<=max_n;++n){
        double ssum=0,csum=0;
        for(t=0;t<1000;++t){
            ssum += volt[t] * sinw[(n*t)%1000];
            csum += volt[t] * cosw[(n*t)%1000];
        }
        double a=ssum*dt*2*f, b=csum*dt*2*f;
        char f_name[16]={};
        sprintf(f_name, "f%d.dat", n);
        FILE* fp=fopen(f_name, "w");
        for(t=0;t<1000;++t){
            ans_dat[t]+=a*sinw[(n*t)%1000];
            ans_dat[t]+=b*cosw[(n*t)%1000];
            fprintf(fp, "%.7f %.12f\n", t*dt, ans_dat[t]);
        }
        fclose(fp);
    }

    FILE* gpfp = fopen("plot.gp", "w");
    for(n=0; n<=max_n; ++n){
        fprintf(gpfp, "plot \"f%d.dat\" with line\n", n);
    }
    fclose(gpfp);
    system("gnuplot plot.gp");
    return 0;
}