#include<stdio.h>

main () {

    int vetor[5];

    for (int i = 0; i < 5; i++) {
        printf("\n Digite os numeros: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 5; i >= 0; i--) {
        printf("\n %d", &vetor[i]);
    }


}