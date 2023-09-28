#include<stdio.h>

main() {

    float x[5], y[5];

    for (int i = 0; i < 6; i++) {
        printf("Digite os numeros do vetor x: \n");
        scanf("\n %f", &x[i]);

        //y[i] = x[i] * x[i];
        y[i] = pow(x[i], 2);

    }

    for (int i = 0; i < 6; i++) {
        printf("\n Valores de x[%f] = %2.f e valores de y[%f] = %2.f", i, x[i], i, y[i]);
    }
    
}