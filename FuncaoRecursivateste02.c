#include<stdio.h>
#include<stdlib.h>
#define ERRO -1
//FUNCAO RECURSIVA - QUANDO A FUNCAO CHAMA A SI MESMA.
int g(int x);

int main(){
    int n = 3;
    int resposta = g(n);
    if (resposta != ERRO) printf("g(%d) = %d\n\n", n, resposta);
    else printf("a funcao nao esta definida para o local indicado!\n");

    }
int g( int x){
    if(x == 0) return (-1);
    else if(x > 0) return(4 *g(x - 1) + 6);
    else return (ERRO);

return 0;
}