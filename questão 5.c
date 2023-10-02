#include<stdio.h>

main () {

    int vetor[5], qtdePares = 0;

    for (int i = 0; i < 5; i++) {
        printf("\n Digite os numeros: ");
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            printf("\n Numero inserido par: %d", vetor[i]);
            qtdePares++;
        } else {
            printf("\n Numero inserido impar: %d", vetor[i]);
        }

    }

    printf("Quantidade de pares: %d", qtdePares);

}