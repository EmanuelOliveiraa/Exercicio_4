#include <stdio.h>

int main(){
    int num,i;
    int arr[5];

    for(i = 0;i < 5;i++){
        printf("Digirte um numero \n");
        scanf("%d",&arr[i]);
    }

    printf("Digirte o codigo \n");
    printf("1 para sequencia \n");
    printf("2 para ordem inversa \n");
    scanf("%d",&num);
    if(num == 0){
        printf("Programa encerrado");
    }
    while(num != 0){

            switch(num){
                case 1:
                    for(i = 0;i<5;i++){
                        printf("%d ",arr[i]);
                    }
                    printf("\n");
                    break;
                case 2:
                    for(i = 0;i<5;i++){
                        printf("%d ",arr[4 - i]);
                    }
                    printf("\n");
                    break;
                default:
                    printf("Num invalido\n");
                    break;

            }
        printf("Digirte o numero \n");
        scanf("%d",&num);
        }

    return 0;

}
