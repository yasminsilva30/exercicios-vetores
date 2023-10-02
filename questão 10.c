#include<stdio.h>
#define TAM 15

main () {

    float notas[TAM], soma = 0, media;

    for (int i = 0; i < TAM; i++) {
        printf("\n Digite os numeros: ");
        scanf("%f", &notas[i]);
        
        soma += notas[i];

    }

    media = soma / TAM;

    printf("\n Media: %2.f", media);
    
}