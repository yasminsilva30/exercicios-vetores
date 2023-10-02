#include<stdio.h>

main () {

    int vetor[6], contador = 0, num;

    /* solução 1
    do {
        printf("\n Digite numero par: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            vetor[contador] = num;
            contador++;
        } else {
            printf("\n Numero impar - Digite um numero par");
        }

    } while (contador < 6); */

    // solução 2
    for (int i = 0; i < 6; i++) {
    
        do {
            printf("\n Digite numero par");
            scanf("\n %d", &vetor[i]);
            if (vetor[i] % 2 != 0) {
                printf("\n Invalido");
            }

        } while (vetor[i] % 2 != 0);

    }

    /*mostrando o vetor 
    for (int i = 0; i < 6; i++) {
        printf("\n %d", &vetor[i]);
    }*/

    for (int i = 5; i >= 0; i--) {
        printf("\n %d", &vetor[i]);
    }

}