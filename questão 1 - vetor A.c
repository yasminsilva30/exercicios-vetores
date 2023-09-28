#include<stdio.h>

main() {

    int A[6] = {1, 0, 5, -2, -5, -7}, soma;

    soma = A[0] + A[1] + A[5];

    printf("Soma: %d", soma);

    A[4] = 100;

    for (int i = 0; i < 6; i++) {
        printf("\n A: %d", A[i]);
    }

}