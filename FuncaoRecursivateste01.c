#include<stdio.h>
#include<stdlib.h>
#define ERRO -1
//FUNCAO RECURSIVA - QUANDO A FUNCAO CHAMA A SI MESMA.
int f (int x);

int main(){
    int n = 4;
    int resposta = f(n);
    if (resposta != ERRO) printf("f(%d) = %d\n\n", n, resposta);
    else printf("a funcao nao esta definida para o local indicado!\n");

    }
int f( int x){
    if(x == 0) return (3);
    else if(x > 0) return(2 *f(x - 1) + 5);
    else return (ERRO);

return 0;
}