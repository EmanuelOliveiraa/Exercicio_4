#include <stdio.h>

int main(){
    int num[] = {1,2,3,4,5,6,11,10,9,8,9,8,7};
    int crescente[6];
    int decrescente[5];
    int ordenado[11], i;
    for(i = 0;i < 6;i++){
        crescente[i] = num[i];
    }
    for(i = 0;i < 5;i++){
        decrescente[i] = num[i+6];
    }
    for(i = 0;i < 6;i++){
        ordenado[i] = crescente[i];
    }
    for(i = 0;i < 5;i++){
        ordenado[i + 6] = decrescente[i];
    }
    for(i = 0;i < 11;i++){

        printf("valores: %d\n", ordenado[i]);

    }


}
