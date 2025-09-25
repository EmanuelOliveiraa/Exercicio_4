#include <stdio.h>
#define NA 10

int main(){
    int num,i,j,repetido, N;
    int vetor[10];

    printf("Digite %d numeros diferentes:\n", N);

    for(i = 0;i < N;i++){
        do{
            printf("Numero %d: ", i+ 1);
            scanf("%d",&num);

            repetido = 0;
            for(j = 0;j < i;j++){
                if(vetor[j] == num){
                    repetido = 1;
                    printf("Valor repetido! Digite outro.\n");
                    break;
                }
            }
        }while(repetido = 1);
        vetor[i] = num;
    }

    printf("\nVetor final:\n");
    for(i = 0;i<10;i++){
        printf("%d",vetor[i]);
    }
    printf("\n");


    return 0;

}
