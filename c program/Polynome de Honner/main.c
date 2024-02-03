#include <stdio.h>
#include <stdlib.h>

double horner(float*coeff[],int j,n, float x)
{
    if(j = n)
    {
        return coeff[j];

    }
    else
        {
        return coeff[j] + x*horner(coeff[j],n,j + 1,x);
        }
}

int main()
{
    int n,i;
    float x;
    printf("entrer la taille de votre tableau");
    scanf("%d",&n);
    printf("entrer la valeur de x");
    scanf("%f",&x);
    float *tab = malloc(sizeof(int)*n);
    if(tab == NULL)
    {
        printf("echec de l allocation");
        return EXIT_FAILURE;
    }
    printf("entrer vos coefficient");
    for(i=o;i<=n;i++)
    {
        scanf("%f",tab[i])
    }
    printf("la solution de horner est%f",horner(tab[],n,i,x));
    return 0;
}
