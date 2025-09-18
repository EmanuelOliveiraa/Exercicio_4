#include <stdio.h>

int main(){
    int nota[5],soma, media,i;
    for(i = 0;i < 5;i++){
        printf("Escreva a nota %d: \n",i + 1 );
        scanf("%d",&nota[i]);
        soma += nota[i];
    }
    media = soma / 5;
    printf("media geral  %d", media);

}
