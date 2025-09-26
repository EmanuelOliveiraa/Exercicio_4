#include <stdio.h>
#define N 5

int main(){
    int X[N],Y[N];
    int i,j;

    printf("Digite 5 elementos para o vetor X:\n");
    for(i = 0;i<N;i++){
        scanf("%d",&X[i]);
    }
    printf("Digite 5 elementos para o vetor Y:\n");
    for(i = 0;i<N;i++){
        scanf("%d",&Y[i]);
    }
    //soma de X e y
    printf("Soma enrtre X e Y:\n");
    for(i = 0;i<N;i++){
        printf("%d",X[i] + Y[i]);
    }
    //produto
    printf("Produto enrtre X e Y:\n");
    for(i = 0;i<N;i++){
        printf("%d",X[i] * Y[i]);
    }
    //diferença
    printf("Diferenca (X - Y):\n");
    for(i = 0;i<N;i++){
        int existe = 0;
        for(i = 0; i < N;i++){
            if(X[i] == Y[j]){
                existe = 1;
                break;
            }
        }
        if(!existe){
            printf("%d",X[i]);
        }
    }
    //Interceçao
    printf("\Intersecao entre X e Y:");
    for(i = 0;i < N;i++){
        for(j= 0;j < N;j++){
            if(X[i] == Y[j]){
                printf("%d",X[i]);
            }
        }
    }

    printf("Uniao entre X e Y:");
    for(i = 0;i < N;i++){
        printf("%d",X[i]);
    }
    for(i = 0;i < N;i++){
        int existe = 0;
        for(j = 0;j < N;j++){
            if(Y[i] == X[j]){
                existe = 1;
                break;
            }
        }
        if(!existe){
            printf("%d",Y[i]);
        }

    }
    return 0;

}
