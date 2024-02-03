#include <stdio.h>
#include <stdlib.h>
#define N 20
int main()
{
    int n,j,i;
    int ligne1[N];
    int ligne2 [N];
    printf("entrer n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        ligne1[i] = 1;
        ligne2[j] = 1;
        for(j=0;j<i;j++)
        {
            if(i==j)
            {
                ligne2[j] = 1;
            } else
            {
                ligne2[j] = ligne1[j-1] + ligne1[j];
            }
        }
        for(j=0;j<=i;j++)
        {
            ligne1[j] = ligne2[j];
            printf("%d\t",ligne1[j]);
        }
        printf("\n");
    }
    return 0;
}
