#include <stdio.h>

int main(){
    int num[11] = {1,2,3,4,5,6,11,10,9,8,7};
    int crescente[6];
    int decrescente[5];
    int ordenado[11], i;
    for(i = 0;i < 6;i++){
        ordenado[i] = num[i];
    }
    for(i = 0;i < 6;i++){
        ordenado[i+6] = num[10 - i];
    }

    for(i = 0;i < 11;i++){

        printf("valores:%d %d\n",i, ordenado[i]);

    }


}
