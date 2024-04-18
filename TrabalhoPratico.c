#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Aluno{
    char nome[25];
    float nota1, nota2;
    float media;
};


int main(){
    char nome[25];
    float nota1, nota2;
    float media;

    FILE *arquivo;

    arquivo = fopen ("SituacaoFinal.csv", "a");

     if(arquivo == NULL){
        printf("Erro na busca pelo arquivo.");
        exit(1);

    }

    printf("Insira o nome do aluno:\n");
    fgets(nome, 25, stdin);

    printf("\ninsira a nota1:\n");
    scanf("%f", &nota1);

    printf("\ninsira anota2:\n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("%s,%.2f",nome,media);

    fprintf(arquivo, "%s,%.2f",nome,media);
    fclose(arquivo);

if(media >= 7){
        printf(",Aprovado.");
    }else{
        printf(",Reprovado.");
    }

}