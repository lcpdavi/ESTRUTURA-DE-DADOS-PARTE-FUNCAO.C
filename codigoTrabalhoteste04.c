#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Aluno{
    char nome[25];
    float nota1, nota2;
    float media;
    char situacao[10];
};

int main(){
    struct Aluno aluno;
    FILE *arquivoEntrada, *arquivoSaida;

    arquivoEntrada = fopen("DadosEntrada.csv", "r");
    if(arquivoEntrada == NULL){
        printf("Erro na abertura do arquivo de entrada.");
        exit(1);
    }

    arquivoSaida = fopen("SituacaoFinal.csv", "w");
    if(arquivoSaida == NULL){
        printf("Erro na abertura do arquivo de saida.");
        exit(1);
    }

    while(fscanf(arquivoEntrada, "%[^,],%f,%f\n", aluno.nome, &aluno.nota1, &aluno.nota2) != EOF) {
        aluno.media = (aluno.nota1 + aluno.nota2) / 2;
        if(aluno.media >= 7){
            strcpy(aluno.situacao, "Aprovado");
        }else{
            strcpy(aluno.situacao, "Reprovado");
        }
        fprintf(arquivoSaida, "%s,%.2f,%s\n", aluno.nome, aluno.media, aluno.situacao);
        printf("%s,%.2f,%s\n", aluno.nome, aluno.media, aluno.situacao); // Print the same data to the console
    }

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    return 0;
}
