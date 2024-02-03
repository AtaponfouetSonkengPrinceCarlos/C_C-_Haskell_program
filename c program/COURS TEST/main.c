#include <stdio.h>
#include <stdlib.h>
int f(int x, int *y){
    static int num = 1;
    int z;
    z = num++*++x - num++**y++;
    *y =*y + 5;
    return z;

}

int main()
{
    int a,b,c;
    a = 10;
    printf("f(%d,%d)=%d',a,*b, c);
    scanf("%d",&b);
    c = f(a,&b);
    printf("f(%d,%d)=%d",a*b,c);
    c = f(a, &b);
    printf("la valeur est %d",c);
    return 0;

}
