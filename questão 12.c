#include<stdio.h>

main() {

    int valores[5], soma, maior, menor, media;

    for (int i = 0; i < 5; i++) {
        printf("\n Digite um valor para valores[%d]: ");
        scanf("%f", &valores[i]);
        soma += valores[i];
    }

    maior = valores[0];
    menor = valores[0];

    for (int i = 0; i < 5; i++) {
        printf("\n Dados em valores[%d] = %d", i, valores[i]);

        if (valores[i] > maior) {
            maior = valores[i];
        } else if (valores[i] < menor) {
            menor = valores[i];
        }
    }

    media = soma / 5;

    printf("\n A media dos valores: %d", media);

}