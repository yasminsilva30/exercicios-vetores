#include<stdio.h>
#include<stdlib.h>

main () {

    int vetor[10], impares[10], i, j = 0, num;

    for (i = 0; i < 10; i++) {
        do {
            printf("Digite os numeros do vetor: 0-50");
            scanf("%d", &vetor[i]);
            if (vetor[i] < 0 || vetor[i] > 50) {
                printf("\n Invalido");
            }
        } while (vetor[i] < 0 || vetor[i] > 50);

        if (vetor[i] % 2 != 0) {
            impares[j] = vetor[i];
            j++;
        }
    }

    for (i = 0; i < 10; i += 2) {
        printf("\n %d, %d", vetor[i], vetor[i+1]);
    }

    for (i = 0; i < j; i += 2) {
        printf("\n %d", impares[i]);
        if (i = 1 < j) {
            printf("\n %d", impares[i+1]);
        }
    }


}