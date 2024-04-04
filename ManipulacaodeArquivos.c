#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    FILE *arquivo;

    arquivo = fopen("teste01.txt", "w");

    if(arquivo == NULL){
        printf("Erro na busca pelo arquivo.");
        exit(1);
    }

    fclose(arquivo);

}
