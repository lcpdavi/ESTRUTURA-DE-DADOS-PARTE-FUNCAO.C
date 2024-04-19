#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Aluno{
    char nome[25];
    float nota1, nota2;
    float media;
};

int main(){
    struct Aluno aluno;

    FILE *DadosEntrada;

    DadosEntrada = fopen("DadosEntrada.csv", "r");

    printf("Insira o nome do aluno:\n");
    fgets(aluno.nome, 25, stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = 0;

    printf("\ninsira a nota1:\n");
    scanf("%f", &aluno.nota1);
    while((getchar()) != '\n'); // Limpa o buffer de entrada

    printf("\ninsira a nota2:\n");
    scanf("%f", &aluno.nota2);
    while((getchar()) != '\n'); // Limpa o buffer de entrada

    aluno.media = (aluno.nota1 + aluno.nota2) / 2;

    FILE *SituacaoFinal;

    SituacaoFinal = fopen("SituacaoFinal.csv", "a");

    if(SituacaoFinal == NULL){
        printf("Erro na busca pelo arquivo.");
        exit(1);
    }
    printf("%s,%.2f", aluno.nome, aluno.media);

    fprintf(SituacaoFinal, "%s,%.2f\n", aluno.nome, aluno.media);
    fclose(SituacaoFinal);

    if(aluno.media >= 7){
        printf(",Aprovado.");
    }else{
        printf(",Reprovado.");
    }

    return 0;
}
