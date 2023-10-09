#include<stdio.h>
#include<stdlib.h>

main () {

    int vetor[5] = {-1, 2, 4, -5, 9}, i, j;

    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    for (j = 0; j < 5; j++) {
        printf("\n Vetor[%d] = %d", j, vetor[j]);
    }


}