#include<stdio.h>

main () {

    float numReais[10], qtdeNegativos = 0, soma = 0;

    for (int i = 0; i < 10; i++) {
        printf("\n Insira um valor em numReais[%d]: ", i);
        scanf("%f", &numReais[i]);

        if (numReais[i] < 0) {
            qtdeNegativos++;
        } else {
            soma += numReais[i];
        }
    }

    printf("\n Quantidade negativos: %2.f e soma dos positivos: %2.f", qtdeNegativos, soma);

}