#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//FPRINTF
int main(){
    FILE *arquivo;
    int numero = 125;

    /*Para que esse codigo funcione, primeiro tem que criar um arquivo teste03.txt*/

    char frase[] = "Esta é uma frase que será gravada no arquivo!";
    arquivo = fopen("teste03.txt", "a");

    //OBS no uso do modo A: 1) Usado para acrescentar arquivos;

    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    fprintf(arquivo, "Número: \n%d\nFrase: %s\n", numero, frase);
    fclose(arquivo);
    return 0;
}
