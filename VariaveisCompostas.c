#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Pessoa{
    char Nome[250];
    int Idade;
    float Altura;
    float Peso;
};

struct Pessoa criarPessoa();
float calcularIMC(struct Pessoa X);
void atualizarIdade(struct Pessoa *X);
void exibirPessoa(struct Pessoa X);

void main(){
    struct Pessoa Dados = criarPessoa();
    /*strcpy(Dados.Nome, "Mike Wazauski");
    Dados.Idade = 22;
    Dados.Altura = 1.12;
    Dados.Peso = 46;*/

    /*printf("Nome:%s, Idade:%d, Altura %.2f, Peso: %.2f\n", Dados.Nome, Dados.Idade, Dados.Altura, Dados.Peso);
    printf("%.2f", calcularIMC(Dados));*/

    exibirPessoa(Dados);
    printf("%.3f", calcularIMC(Dados));
    atualizarIdade(&Dados);
    exibirPessoa(Dados);

    
}

struct Pessoa criarPessoa(){
    struct Pessoa X;
    printf("Digite o nome:\n");
    gets(X.Nome);

    printf("Digite a idade:\n");
    scanf("%d", &X.Idade);

    printf("Digite a altura:\n");
    scanf("%f", &X.Altura);

    printf("Digite o peso:\n");
    scanf("%f", &X.Peso);

    return(X);
}

float calcularIMC(struct Pessoa X){
float valorIMC = X.Peso/(X.Altura * X.Altura);
return(valorIMC);
}

void atualizarIdade(struct Pessoa *X){
    X->Idade = X->Idade + 1;
}

void exibirPessoa(struct Pessoa X){
    printf("Nome:%s, Idade:%d, Altura %.2f, Peso: %.2f\n", X.Nome, X.Idade, X.Altura, X.Peso);

}