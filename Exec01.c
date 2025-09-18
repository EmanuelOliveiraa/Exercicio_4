#include <stdio.h>

int main(){
    int num[10],i,maior,posi;
    for(i = 0;i < 4;i++){
        printf("Escreva o %d numero: \n",i + 1 );
        scanf("%d",&num[i]);

    }
    maior = num[0];
    for(i = 0;i < 4;i++){
        printf("Elemento n%d  %d\n",i + 1, num[i]);

        if(num[i] > maior){
            maior = num[i];
            posi = i;
        }
    }
    printf("Maior elemento: %d  e sua posisao %d",maior, posi + 1);


}
