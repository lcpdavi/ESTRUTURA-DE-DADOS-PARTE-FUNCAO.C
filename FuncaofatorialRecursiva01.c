#include<stdio.h>
#include<stdlib.h>
#define ERRO -1
//FUNCAO RECURSIVA - QUANDO A FUNCAO CHAMA A SI MESMA.
int fat(int x);

int main(){
    int n;
    printf("Digite um numero nao negativo:\n");
    scanf("%d", &n);
    int resposta = fat(n);
    if (resposta != ERRO) printf("fat%d! = %d\n\n", n, resposta);
    else printf("Nao existe fatorial de numero negativo!\n");

    }
int fat( int x){
    if(x == 0) return (1);
    else if(x > 0) return(x *fat(x - 1));
    else return (ERRO);

return 0;
}