#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,tmp, tab[100];
    int permut ;
    printf("la taille du tableau");
    do
    {
        scanf("%d",&n);
    }while(n<=0);
    for(i=0;i<=n;i++)
    {
        printf("taper tab[%d]",i);
        scanf("%d",&tab[i]);
    }
    permut = 0;
    do
    {
        for(i=0;i<n;i++)
        {
            if(tab[i]>tab[i+1])
            {
                tmp = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = tmp;
                permut = 1;
            } else {
                permut = 0;
            }
            }

        }while (permut = 1);
         for(i=0;i<n;i++)
    {

        printf("%d",tab[i]);
    }
    return 0;

    }

