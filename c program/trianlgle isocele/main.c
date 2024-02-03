#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,hauteur,nbespace;
    for(i=0;i<=hauteur;i++)
    {
        nbespace = hauteur - 1;
    for(j=0;j<nbespace;j++)
    {
        printf("");
    }
    for(j=0;j<(2*i - 1);j++)
    {
        printf("*");
    }
    print("\n");
    }
    return 0;
}
