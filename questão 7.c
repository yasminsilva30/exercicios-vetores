#include<stdio.h>

main () {

    int vetor[5], maior, posiMaior;

    for (int i = 0; i < 5; i++) {
        printf("\n Digite os numeros: ");
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];

    for (int i = 0; i < 5; i++) {
        printf("\n %d", vetor[i]);
        if(vetor[i] > maior) {
            maior = vetor[i];
            posiMaior = i;
        }
    }

    printf("\n Maior: %d esta na posicao %d", maior, posiMaior);
    
}