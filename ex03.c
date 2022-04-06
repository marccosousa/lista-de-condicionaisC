#include <stdio.h>

int main () {

    float valores, menor=0;
    int c, barato; 

    for (c = 1; c <= 3; c++) {

        printf ("Valor do produto %d R$", c);
        scanf ("%f", &valores);

        if (c == 1 || valores < menor) {

            menor = valores;
            barato = c;
                     
        }       
    }
    printf ("Voce tera que comprar o PRODUTO %d", barato);

    return 0;
}