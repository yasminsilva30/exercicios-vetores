#include<stdio.h>

main () {

    int vetor[10];

    for (int i = 0; i < 10; i++) {
        printf("Inserir um valor em vetor[%d]", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i+1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("\n Valor igual: %d", vetor[i]);
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i+1; j < 10; j++) {
            if (vetor[i] != vetor[j]) {
                printf("\n Valor diferente: %d", vetor[i]);
            }
        }
    }

}