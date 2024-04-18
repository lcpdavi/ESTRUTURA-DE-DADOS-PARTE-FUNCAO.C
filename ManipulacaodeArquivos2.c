#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//FOPEN
int main(){

    FILE *arquivo;

    arquivo = fopen("teste02.txt", "r");

    /*OBS no uso do modo R: 1)Usado para arquivo EXISTENTE.
    2) Se o arquivo nao existe, o ponteiro vai ser NULL.*/


    if(arquivo == NULL){
        printf("Erro na busca pelo arquivo.");
        exit(1);
    }

    fclose(arquivo);

}
