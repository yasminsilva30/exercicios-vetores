#include<stdio.h>

main () {

    /* formas de inserir matriz
    
    int matriz[2][3];

    int matriz2[2][3] = {1, 2, 3,
                        4, 5, 6};

    int matriz3[2][3] = {{1, 2, 3}
                        {4, 5, 6}};
    
    int matriz4[2][3] = {1, 2, 3, 4, 5, 6};

    printf("%d", matriz[0][2]); */

    int matriz[2][3];

    //percorrendo as linhas
    for (int i = 0; i < 2; i++) {
        //percorrendo as colunas
        for (int j = 0; j < 3; j++) {
            printf("Digite os dados da matriz: ");
            scanf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

}