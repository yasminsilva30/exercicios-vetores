#include<stdio.h>

main() {

    int vetor[8], x, y, soma = 0;

    //inserir os dados no vetor
    for (int i = 0; i < 8; i++) {
        printf("\n Digite o numero: ");
        scanf("%d", &vetor[i]);
    
    } do {

        printf("\n Digite o valor que deseja inserir no X e Y: ");
        scanf("%d", &x);
        scanf("%d", &y);

        if ((x >= 0 && x < 8) && (y >= 0 && y < 8)) {
            for (int i = 0; i < 8; i++) {
                if (x == i) {
                    soma += vetor[i];
                }
                
                if (y == i) {
                    soma += vetor[i];
                }
            }
       
        } else {
        printf("\n Indices nao encontrados. Digite novamente :( ");
        }
    
    fflush(stdin);
    
    } while ((x < 0 || x < 7) && (y < 0 || y < 7));

    printf("Soma: %d", soma);
}

