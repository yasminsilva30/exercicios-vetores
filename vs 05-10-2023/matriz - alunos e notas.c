#include<stdio.h>

main () {

    char alunos[3][20];
    int notas[3][3];
    int soma;
    double media;

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do aluno: ");
        fgets(alunos[i], 20, stdin);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite as notas do aluno: ");
            scanf("%d", notas[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        soma = 0;
        for (int j = 0; j < 3; j++) {
            soma += notas[i][j];
        }

        media = soma / 3;

        printf("\n Nome: %s", alunos[i]);
        printf("Media do aluno: %2.f", media);

    }

}