#include <stdio.h>
#include <stdlib.h>


int main () {
    int c;
    float valores, maior, menor, meio;

    for (c = 1 ; c <= 3 ; c++) {

        printf("Escreva o %da numero: ", c);
        scanf ("%f", &valores);

        if (c == 1) {

            maior = valores;
            menor = valores;
            meio = valores; 
        
        } else if (valores > maior) {

            meio = maior;
            maior = valores;

        } else if (valores < menor) {

            meio = menor;
            menor = valores;

        }

    }

    printf ("EM ORDEM DECRESCENTE: %.2f, %.2f, %.2f", maior, meio, menor);

    return 0;
}