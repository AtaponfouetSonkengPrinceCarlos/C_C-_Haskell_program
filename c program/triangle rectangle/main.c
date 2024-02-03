#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nblig,i,j;
printf("entrer le nombre de ligne");
scanf("%d",&nblig);
for(i=0;i<=nblig;i++)
{
    for(j=0;j<=i;j++)
    {
        printf("*");
    }
    print("/");
}
    return 0;
}
