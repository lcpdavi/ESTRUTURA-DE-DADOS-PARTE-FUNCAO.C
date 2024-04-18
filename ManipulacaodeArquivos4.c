#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *arquivo;
    int pontos;
    char time[20];
    arquivo = fopen("teste04.txt", "r");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }
    // Lendo um número inteiro e uma palavra do arquivo
    fscanf(arquivo, "%d %s", &pontos, time);
    printf("A equipe %s conquistou %d pontos.", time, pontos);
    fclose(arquivo);
    return 0;
}