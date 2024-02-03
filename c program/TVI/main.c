#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double f(double x)
{
    return sqrt(x) -exp(-x) -1;
}
int main()
{
double a,b,c;
double epsi = 0.0001;
printf("saisir l intervalle a");
scanf("%lf",&a);
printf("saisir l intervalle b");
scanf("%lf",&b);
if(f(a)*f(b) < 0){
do
{
        if(f(a)*f(c) < 0){
            b = c;
        }else{
            a = c;
        }
    }while (abs(f(c) < epsi));
} else {
    printf("pas de solution");
}
    if(f(a)*f(b) < 0){
    printf("le solution est %lf et l erreur est %lf",c,f(c));
}
return 0;
}


