#include <stdio.h>

int main(){
    int num[10],i,pare[10];
    for(i = 0;i < 10;i++){
        printf("Escreva o %d numero: \n",i + 1 );
        scanf("%d",&num[i]);

    }
    for(i = 0;i < 10;i++){
        if(num[i] % 2 == 0){
            printf("Valores pares: %d\n",num[i]);
        }

    }


}
