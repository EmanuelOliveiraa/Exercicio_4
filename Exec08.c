#include <stdio.h>

int main(){
    int A[5];
    int temp[5];

    int i,j;

    for(i = 0;i < 5;i++){
        printf("Escreva 10 numeros inteiros %d\n",i);
        scanf("%d",&A[i]);
    }
    for(i = 0;i < 5;i++){
        temp[i] = A[i];
        for(j = 0;j < 5;j++){
            if(A[i] == temp[j]){
                printf("Valores iguais %d  %d\n",temp[i],A[j]);
            }
        }
    }
    printf("");



    return 0;

}
