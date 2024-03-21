#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void exibirVetor(int Vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++)
        printf("%d\t", Vetor[i]);
        /*tamanho = 2 * tamanho - 'd';
        printf("\nTamanho (exibirVetor): %d\n", tamanho);*/
    }

    //na funcao a seguir, o vetor é o endereço de memoria de um int

void modificarvetor(int *Vetor, int tamanho){
    for(int i = 0; i < tamanho; i++)
    Vetor[i] = Vetor[i] * 2;
}

//testar

void testarVetor( int *Vetor, int tamanho){
    printf("\n%d\n", Vetor); //mostra o endereço de memoria do primeiro vetor
    /*Vetor++;
    printf("\n%d\n", Vetor); //mostra o endereço do segundo elemento do vetor
    printf("\n%d\n", Vetor);*/

    printf("\n%d\n", &Vetor[0]);//cada um pula 4 bytes
    printf("\n%d\n", &Vetor[1]);
    printf("\n%d\n", &Vetor[2]);
    printf("\n%d\n", &Vetor[3]);
    printf("\n%d\n", &Vetor[4]);
    printf("\n%d\n", &Vetor[5]);
    printf("\n%d\n", &Vetor[6]);
    printf("\n%d\n", &Vetor[7]);
    printf("\n%d\n", &Vetor[8]);



}


int  main(){
    int Vetor[] = {3, 1, 2, -7, 'c', 8, -9};
    int tamanho = sizeof(Vetor) / sizeof(int);
    exibirVetor(Vetor, tamanho);
    modificarvetor(Vetor, tamanho);
    exibirVetor(Vetor, tamanho);
    testarVetor(Vetor, tamanho);

    /*printf("\nTamanho (exibirVetor): %d\n", tamanho);*/

    return 0;
}