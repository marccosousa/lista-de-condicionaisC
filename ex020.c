#include <stdio.h>
#include <stdlib.h>

int main () {

    int base, expoente, res = 1, c ;

    printf ("Digite a base: ");
    scanf ("%d", &base);
    printf ("Digite o exponte: ") ;
    scanf ("%d", &expoente);

    for (c = 1; c <= expoente; c++ ) {
        res *= base;
    }

    if (expoente == 0) {
        printf ("%d^%d = 1", base, expoente);
    } else {
        printf ("%d^%d = %d", base, expoente, res);
    }
    
    return 0;
}