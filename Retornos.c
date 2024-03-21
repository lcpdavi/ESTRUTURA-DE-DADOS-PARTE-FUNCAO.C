#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*ponteiro para inteiro*/int *criarArray(int tamanho) {
int *array = malloc(tamanho * sizeof(int)); //malloc - significa alocar memoria

// Preencher o array
for (int i = 0; i < tamanho; i++) array[i] = i + 1;
return array;

}

int main() {
int tamanho;
printf("Digite o tamanho:\n");
scanf("%d", &tamanho);

int *meuArray = criarArray(tamanho);
// Usar o array retornado
for (int i = 0; i < tamanho; i++) printf("%d ", meuArray[i]);
free(meuArray); // Liberar a memória alocada
return 0;

}
