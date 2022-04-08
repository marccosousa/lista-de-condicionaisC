#include <stdio.h>
#include <stdlib.h>

int main () {

    int c, valor, res;
    
    printf ("De qual valor voce quer ver a tabuada? ");
    scanf ("%d", &valor);

    printf ("----- TABUADA DE %d ----- \n", valor);
    for (c = 1 ; c <= 10 ; c++) {
        res = valor * c;
        printf ("%d x %d = %d\n", valor, c, res);

    }
    return 0;
}