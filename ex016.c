#include <stdio.h>
#include <stdlib.h>

int main () {

    int c;
    float valores, soma = 0, media = 0;

    for (c = 1 ; c <= 5 ; c++){

        printf ("Digite o %da numero: ", c);
        scanf ("%f", &valores);
        soma += valores;
        media = soma / 5; 

    }
    printf ("A soma dos valores e igual a: %.2f\n", soma);
    printf ("A media dos valores e: %.2f", media);

    return 0;
}