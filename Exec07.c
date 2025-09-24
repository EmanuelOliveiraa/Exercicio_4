#include <stdio.h>

int main(){
    int A[10];
    int B[10];
    int C[10];
    int i;

    for(i = 0;i < 10;i++){
        printf("Escreva 10 numeros inteiros para o vetor A %d\n",i);
        scanf("%d",&A[i]);
    }
    for(i = 0;i < 10;i++){
        printf("Escreva 10 numeros inteiros para o vetor B %d\n",i);
        scanf("%d",&B[i]);
    }
    printf("");
    for(i = 0;i < 10;i++){

        C[i] = A[i] - B[i];
    }
    for(i = 0;i < 10;i++){
        printf("Resuntado da subtracao A %d - B %d = %d\n",A[i],B[i],C[i]);

    }

    return 0;

}
