#include<stdio.h>

main () {

    int vetor[20], iguais;

    for (int i = 0; i < 20; i++) {
        printf("Inserir um valor inteiro em vetor[%d]", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 20; i++) {
        iguais = 0;
        for (int j = i+1; j < 20; j++) {
            if (vetor[i] == vetor[j]) {
                iguais = 1;
            }
        }

        if (iguais != 1) {
            printf("\n Impressao sem valores iguais: %d", vetor[i]);
        }

    }


}