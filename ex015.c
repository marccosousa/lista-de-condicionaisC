#include <stdio.h>
#include <stdlib.h>

int main () {

    int c;
    float valores, maior = 0;

    for (c = 1 ; c <= 5 ; c++){

        printf ("Digite o %da numero: ", c);
        scanf ("%f", &valores);

        if (valores > maior ) {
            maior = valores; 
        }
    }

    printf ("O maior valor digitado foi: %.0f", maior);

    return 0;
}