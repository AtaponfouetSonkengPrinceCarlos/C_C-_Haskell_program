#include <stdio.h>
#include <stdlib.h>
int main(){
    float tab[3],min;
    int i;
    printf("entrer vos 4 nombre\n");
    for(i = 0;i<=3;i++){
        scanf("%f",&tab[i]);
    }
    min = tab[0];
    for(i=1;i<=3;i++){
        if(min > tab[i]){
            min = tab[i];
        }}
        printf("les trois plus grand sont:");
        for(i=0;i<=3;i++){
            if(min != tab[i]){
                printf("%f\n",tab[i]);
            }
        }
        return 0;
}

