#include<stdio.h>

main () {

    int vetor[5], maior, menor, posiMaior, posiMenor;

    for (int i = 0; i < 5; i++) {
        printf("\n Digite os numeros: ");
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (int i = 0; i < 5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posiMaior = i;
        }
        if (vetor[i] > menor) {
            menor = vetor[i];
            posiMenor = i;
        }
    }

    printf("\n Maior: %d esta na posicao %d", maior, posiMaior);
    printf("\n Menor: %d esta na posicao %d", menor, posiMenor);

}