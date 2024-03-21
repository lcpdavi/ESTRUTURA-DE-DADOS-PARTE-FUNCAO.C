#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void exibirVetor(int Vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++)
        printf("%d\t", Vetor[i]);
        /*tamanho = 2 * tamanho - 'd';
        printf("\nTamanho (exibirVetor): %d\n", tamanho);*/
    }

int  main(){
    int Vetor[] = {3, 1, 2, -7, 'c', 8, -9};
    int tamanho = sizeof(Vetor) / sizeof(int);
    exibirVetor(Vetor, tamanho);

    /*printf("\nTamanho (exibirVetor): %d\n", tamanho);*/

    return 0;
}