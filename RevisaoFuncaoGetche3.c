#include <stdlib.h>
#include <conio.h>
//OTIMA FUNCAO PARA LER CARACTERE
char minusculo () {
    char ch = getche();
    if ((ch >= 'A') && (ch <= 'Z')) return (ch + 32);
    else return (ch);
}

int main() {
    char letra = minusculo();
    printf("\n\nResposta:%c\n", letra);
    return 0;
}
