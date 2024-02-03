#include <stdio.h>
#include <stdlib.h>
#define  pi 3,14

int main()
{
    float r,h,p;
    printf("entrer le rayon\n");
    scanf("%f",&r);
    printf("entrer la hauteur\n");
    scanf("%f",&h);
    p = 2*(h + 2*3.14*r);
    printf("la valeur de votre perimetre est p=%f",p);
    return 0;
}
