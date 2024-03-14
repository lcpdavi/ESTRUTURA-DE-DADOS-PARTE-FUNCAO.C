#include<stdio.h>
#include<stdlib.h>

int main(){
    int M[3][3] = {
        {1,4,3},
        {2,1,2},
        {0,5,6}
    }; 
    int determinante = M[0][0] * M[1][1] * M[2][2];
    determinante = determinante + M[0][1] * M[1][2] * M[2][0];

    //Resultado: -22;

    printf("O resultado do determiante e %d:\n", determinante);
    

    return 0;
}