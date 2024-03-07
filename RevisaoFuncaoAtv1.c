#include<stdio.h>
#include<stdlib.h>

char f(int x){
    if(x == 1) return('c');
    else if (x == 2) return('d');
    else if (x == 3) return('e');
    else if (x == 4) return('b');
    else if (x == 5) return('e');
    else {
        printf("Nao foi possivel calcular o resultado.\n");
        exit(0);
    }
    
}

int main(){
    char ch = f(1);
    printf("Resposta: %c", ch);
}