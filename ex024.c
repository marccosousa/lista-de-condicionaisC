#include <stdio.h>
#include <stdlib.h>

int main () {
    int valores, maior=0, menor=0;
    char resp = 's';
    do {
        printf ("Digite um valor: ");
        scanf ("%d", &valores);

        if (valores > maior) {
            maior = valores;
        } else {
            menor = valores;
        }

        printf ("Deseja continuar? [S] ou [N]? ");
        rewind(stdin);
        scanf ("%c", &resp);
    
    } while (resp == 's' || resp == 'S');

    printf ("O maior valor digitado foi: %d e o menor foi: %d", maior, menor);
    return 0;
}