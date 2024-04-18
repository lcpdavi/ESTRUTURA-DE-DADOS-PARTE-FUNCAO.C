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

    FILE *arquivo;

    arquivo = fopen ("DadosEntrada.csv", "r");

    if(arquivo == NULL){
        printf("Erro na busca pelo arquivo.");
        exit(1);
    }

    fscanf(arquivo, "%[^,],%f,%f\n", aluno.nome, &aluno.nota1, &aluno.nota2);
    fclose(arquivo);

    aluno.media = (aluno.nota1 + aluno.nota2) / 2;

    printf("%s,%.2f", aluno.nome, aluno.media);

    arquivo = fopen("SituacaoFinal.csv", "a");

    if(arquivo == NULL){
        printf("Erro na busca pelo arquivo.");
        exit(1);
    }

    fprintf(arquivo, "%s,%.2f\n", aluno.nome, aluno.media);
    fclose(arquivo);

    if(aluno.media >= 7){
        printf(",Aprovado.");
    }else{
        printf(",Reprovado.");
    }

    return 0;
}