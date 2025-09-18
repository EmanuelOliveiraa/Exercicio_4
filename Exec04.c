#include <stdio.h>

int main(){
    int num[10],i,pare[10];
    for(i = 0;i < 5;i++){
        printf("Escreva o %d numero: \n",i + 1 );
        scanf("%d",&num[i]);

    }
    for(i = 0;i < 5;i++){

        if(num[i] < 0){
            num[i] = 0;
        }

        printf("valores: %d\n", num[i]);

    }


}
