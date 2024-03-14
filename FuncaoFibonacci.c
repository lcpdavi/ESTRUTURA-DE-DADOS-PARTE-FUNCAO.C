#include<stdio.h>
#include<stdlib.h>
#define ERRO -1

int fib(int x);
//FUNCAO RECURSIVA - QUANDO A FUNCAO CHAMA A SI MESMA.
int main(){
    int n;
    printf("Digite um numero nao negativo:\n");
    scanf("%d", &n);
    int resposta = fib(n);
    if (resposta != ERRO) printf("fib%d! = %d\n\n", n, resposta);
    else printf("ERRO!\n");

    }
int fib( int x){
    if(x == 1 && x == 2) return(1);
    else if(x > 2) return(fib(x - 1) * fib(x - 2));
    else return (ERRO);

return 0;
}