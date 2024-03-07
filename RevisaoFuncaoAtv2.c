#include<stdio.h>
#include<stdlib.h>

#define ERRO -1

int area(int lado){
    if(lado == 2 || lado == 3 || lado == 4 || lado == 5){
    int Resposta = lado * lado;
    return(Resposta);
    }
else{
    printf("A area nao pode ser calculada.\n");
    return(ERRO);
    }
}
int main(){
    int l = 6;
    int a = area(l);
    printf("A area do quadrado de lado %d e igual a %d\n", l, a);

}